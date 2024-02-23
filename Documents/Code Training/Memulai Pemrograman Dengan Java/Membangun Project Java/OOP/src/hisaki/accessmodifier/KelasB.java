package hisaki.accessmodifier;

public class KelasB extends kelasA {
    @Override
    protected void methodC() {
        super.methodC();
        System.out.println("Contoh pemanggilan protected dari package luar");
    }
}
