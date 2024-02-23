#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080 // Ganti port sesuai kebutuhan
#define MAX_MESSAGE_SIZE 1024

int main()
{
    struct sockaddr_in server_address, client_address;
    int server_socket, client_socket;
    socklen_t client_address_len;
    char message[MAX_MESSAGE_SIZE];

    // Membuat socket UDP
    server_socket = socket(AF_INET, SOCK_DGRAM, 0);
    if (server_socket == -1)
    {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(PORT);

    // Bind socket ke alamat IP dan port tertentu
    if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1)
    {
        perror("Error binding");
        exit(EXIT_FAILURE);
    }

    printf("Server berjalan. Menunggu koneksi...\n");

    while (1)
    {
        client_address_len = sizeof(client_address);

        // Menerima pesan dari klien
        int bytes_received = recvfrom(server_socket, message, MAX_MESSAGE_SIZE, 0, (struct sockaddr *)&client_address, &client_address_len);
        if (bytes_received == -1)
        {
            perror("Error receiving data");
            exit(EXIT_FAILURE);
        }

        message[bytes_received] = '\0';
        printf("Data diterima: %s\n", message);

        // Kirim balik respons ke klien
        char response[MAX_MESSAGE_SIZE];
        snprintf(response, sizeof(response), "Pesan diterima: %s", message);
        sendto(server_socket, response, strlen(response), 0, (struct sockaddr *)&client_address, client_address_len);
    }

    close(server_socket);
    return 0;
}
