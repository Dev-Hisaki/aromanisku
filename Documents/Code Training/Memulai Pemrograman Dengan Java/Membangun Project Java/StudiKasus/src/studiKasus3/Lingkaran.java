package studiKasus3;

public class Lingkaran implements BangunDatar {

    final double pi = 3.1415;

    Lingkaran(){

    }

    @Override
    public double luas(int s1, int s2){
        return 0;
    }

    public double keliling(int s1, int s2){
        return 0;
    }

    public double luas(int r){
        return (pi * r * r);
    }

    public double keliling(int r){
        return (2 * pi * r);
    }
}