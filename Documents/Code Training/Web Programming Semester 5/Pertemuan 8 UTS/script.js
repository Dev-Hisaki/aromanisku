$(document).ready(function () {                         // Mulai Ketika halaman html selesai dimuat
    $("#registration-form").submit(function (event) {
        event.preventDefault();
        var name = $("#name").val();
        var email = $("#email").val();
        var password = $("#password").val();

        Swal.fire(
            'Registrasi Berhasil',
            'Halo ' + name + ', Email kamu adalah ' + email + ' dengan password ' + password,
            'success'
        );
    });
});
