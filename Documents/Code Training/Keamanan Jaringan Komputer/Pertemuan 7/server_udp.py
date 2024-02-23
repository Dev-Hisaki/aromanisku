import socket

# Fungsi untuk menjalankan server


def run_server():
    # Buat objek socket UDP
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Bind socket ke alamat IP dan port tertentu
    # Ganti alamat IP dan port sesuai kebutuhan
    server_address = ('192.168.0.101', 8080)
    server_socket.bind(server_address)

    print("Server berjalan. Menunggu koneksi...")

    while True:
        data, client_address = server_socket.recvfrom(1024)  # Maksimal 1024 byte data
        print("Data diterima:", data.decode('utf-8'))

        # Kirim balik respons ke klien
        response = "Pesan diterima: " + data.decode('utf-8')
        server_socket.sendto(response.encode('utf-8'), client_address)


# Jalankan server
run_server()
