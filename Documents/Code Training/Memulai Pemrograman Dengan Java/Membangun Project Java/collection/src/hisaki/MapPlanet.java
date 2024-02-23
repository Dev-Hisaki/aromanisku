package hisaki;

import java.util.HashMap;
import java.util.Map;


public class MapPlanet {
    public static void main(String[] args) {
        // Menggunakan Map
        Map<String, Planet> Planets = new HashMap<>();
        
        Planets.put("Key-1", new Planet("Mercury", 0.06));
        Planets.put("Key-2", new Planet("Venus", 0.02));
        Planets.put("Key-3", new Planet("Earth", 1.06));
        Planets.put("Key-4", new Planet("Mars", 0.11));
        Planets.put("Key-4", new Planet("Mars-X", 0.11));

        System.out.println("Map planets awal : (size = " + Planets.size() + ")");
        for (String key : Planets.keySet()) {
            System.out.println("\t " + key + " : " + Planets.get(key));
        }

        Planets.remove("Key-2");

        System.out.println("Map planets akhir : (size = " + Planets.size() + ")");
        for (Planet planet : Planets.values()) {
            System.out.println("\t " + planet);
        }
    }
}
