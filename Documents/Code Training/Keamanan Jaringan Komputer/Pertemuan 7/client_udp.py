import socket

# Fungsi untuk menjalankan klien


def run_client():
    # Buat objek socket UDP
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Alamat server yang akan dihubungi
    # Ganti alamat IP dan port sesuai server
    server_address = ('192.168.0.101', 8080)

    # Kirim pesan ke server
    message = "ini adalah pesan dari UDP!"
    client_socket.sendto(message.encode('utf-8'), server_address)

    # Terima respons dari server
    response, server_address = client_socket.recvfrom(1024)
    print("Respons dari server:", response.decode('utf-8'))


# Jalankan klien
run_client()
