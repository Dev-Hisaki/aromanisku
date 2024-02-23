#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8080            // Ganti port sesuai server
#define SERVER_IP "192.168.0.101" // Ganti IP server

int main()
{
    struct sockaddr_in server_address;
    int client_socket;
    char message[1024];

    // Membuat socket UDP
    client_socket = socket(AF_INET, SOCK_DGRAM, 0);
    if (client_socket == -1)
    {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);
    inet_pton(AF_INET, SERVER_IP, &(server_address.sin_addr));

    // Kirim pesan ke server
    char *message = "Hello, server!";
    if (sendto(client_socket, message, strlen(message), 0, (struct sockaddr *)&server_address, sizeof(server_address)) == -1)
    {
        perror("Error sending data");
        exit(EXIT_FAILURE);
    }

    printf("Pesan terkirim: %s\n", message);

    // Terima respons dari server
    char response[1024];
    socklen_t server_address_len = sizeof(server_address);
    int bytes_received = recvfrom(client_socket, response, sizeof(response), 0, (struct sockaddr *)&server_address, &server_address_len);
    if (bytes_received == -1)
    {
        perror("Error receiving data");
        exit(EXIT_FAILURE);
    }

    response[bytes_received] = '\0';
    printf("Respons dari server: %s\n", response);

    close(client_socket);
    return 0;
}
