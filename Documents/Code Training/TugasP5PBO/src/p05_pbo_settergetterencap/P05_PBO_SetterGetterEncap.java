package p05_pbo_settergetterencap;

class Enkapsulasi{
    private int alas, tinggi;
    private double LuasSegitiga;

    public void SetLuasSegitiga(int a, int t){
        this.alas = a;
        this.tinggi = t;
        this.LuasSegitiga = 0.5 * this.alas * this.tinggi;
    }

    double LuasSegitiga(){
        return this.LuasSegitiga;
    }
}

public class P05_PBO_SetterGetterEncap {
    public static void main(String[] args) {
        Enkapsulasi encap = new Enkapsulasi();
        
        encap.SetLuasSegitiga(2, 3);
        System.out.println(encap.LuasSegitiga());
    }
}
