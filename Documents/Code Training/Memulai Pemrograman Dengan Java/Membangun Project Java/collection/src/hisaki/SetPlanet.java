package hisaki;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class SetPlanet {
    public static void main(String[] args) {
        // Menggunakan SetList
        Set<String> planets = new HashSet<>();

        planets.add("Mercury");
        planets.add("Venus");
        planets.add("Earth");
        planets.add("Earth");
        planets.add("Earth");
        planets.add("Mars");
    
        System.out.println("Set Planet awal : (size = " + planets.size() + ")");
        for (String planet : planets) {
            System.out.println("\t " + planet);
        }

        planets.remove("Venus");

        System.out.println("Set planet akhir: (size = " + planets.size() + ")");
        // Perulan
        for(Iterator iterator = planets.iterator(); iterator.hasNext();){
            System.out.println("\t " + iterator.next());
        }
    }
}
