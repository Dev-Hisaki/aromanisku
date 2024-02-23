import socket

# Fungsi untuk menjalankan server


def run_server():
    # Buat objek socket TCP
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind socket ke alamat IP dan port tertentu
    # Ganti alamat IP dan port sesuai kebutuhan
    server_address = ('192.168.0.101', 8080)
    server_socket.bind(server_address)

    # Mulai mendengarkan koneksi masuk
    server_socket.listen(1)
    print("Server berjalan. Menunggu koneksi...")

    # Terima koneksi dari klien
    client_socket, client_address = server_socket.accept()
    print("Koneksi diterima dari:", client_address)

    # Terima data dari klien dan kirim balik
    data = client_socket.recv(1024)  # Maksimal 1024 byte data
    print("Data diterima:", data.decode('utf-8'))

    # Kirim balik respons ke klien
    response = "Pesan diterima: " + data.decode('utf-8')
    client_socket.send(response.encode('utf-8'))

    # Tutup koneksi
    client_socket.close()
    server_socket.close()

# Fungsi untuk menjalankan klien


def run_client():
    # Buat objek socket TCP
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Alamat server yang akan dihubungi
    # Ganti alamat IP dan port sesuai server
    server_address = ('192.168.0.101', 8080)

    # Hubungkan ke server
    client_socket.connect(server_address)

    # Kirim pesan ke server
    message = "Hello, server!"
    client_socket.send(message.encode('utf-8'))

    # Terima respons dari server
    response = client_socket.recv(1024)
    print("Respons dari server:", response.decode('utf-8'))

    # Tutup koneksi
    client_socket.close()


if __name__ == '__main__':
    role = input("Pilih peran (server/client): ")
    if role == 'server':
        run_server()
    elif role == 'client':
        run_client()
    else:
        print("Pilih peran yang valid: 'server' atau 'client'")
