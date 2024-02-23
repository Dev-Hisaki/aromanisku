import socket

# Fungsi untuk menjalankan server


def run_client():
    # Buat objek socket TCP
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Alamat server yang akan dihubungi
    # Ganti alamat IP dan port sesuai server
    server_address = ('192.168.0.101', 8080)

    # Hubungkan ke server
    client_socket.connect(server_address)

    # Kirim pesan ke server
    message = "Halo Kejarkom!!!"
    client_socket.send(message.encode('utf-8'))

    # Terima respons dari server
    response = client_socket.recv(1024)
    print("Respons dari server:", response.decode('utf-8'))

    # Tutup koneksi
    client_socket.close()


run_client()
