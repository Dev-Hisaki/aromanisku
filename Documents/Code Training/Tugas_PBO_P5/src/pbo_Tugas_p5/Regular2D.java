package pbo_Tugas_p5;

public class Regular2D extends Prices{

    @Override
    public void showTicketPrices(){
        System.out.println("Film Name\t: " + filmName);
        System.out.println("Ticket Prices\t: Rp." + hargaTiket);
    }

    @Override
    public void showDesc(){
        System.out.println("This film title is " + filmName + " categorized as 2D film");
        System.out.println("-----------------------");
    }
}
