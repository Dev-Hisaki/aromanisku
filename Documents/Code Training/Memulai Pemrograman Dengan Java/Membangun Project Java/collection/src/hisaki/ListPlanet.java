package hisaki;

import java.util.ArrayList;
import java.util.List;

public class ListPlanet {
    public static void main(String[] args) {
        String heroes[] = new String[2];
        heroes[0] = "Me";
        heroes[1] = "You";

        // Menggunakan ArrayList
        List<String> planets = new ArrayList<>();
        
        planets.add("Mercury");
        planets.add("Venus");
        planets.add("Earth");
        planets.add("Mars");

        System.out.println("List Planet Awal");
        for (int i = 0; i < planets.size(); i++) {
            System.out.println("\t Index-" + i + " = " + planets.get(i));
        }
    }
}
