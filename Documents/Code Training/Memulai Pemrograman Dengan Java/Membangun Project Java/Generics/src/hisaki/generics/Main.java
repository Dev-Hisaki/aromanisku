package hisaki.generics;

import java.security.cert.CollectionCertStoreParameters;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

import javafx.beans.binding.ObjectExpression;

public class Main {
    public static void main(String[] args) {
        List loList = new ArrayList();  // List tanpa type-parameter
        loList.add("lo - String 1");    // loList menampung object String
        loList.add(new Planet("Mercury", 0.06));    // loList menampung object Planet

        for (Object o : loList) {
            Planet p = (Planet) o;  // Perlu type-casting dari object ke Planet
            p.print();
        }

        List<Planet> pList = new ArrayList();   // List dengan type-parameter
        pList.add(new Planet("Mercury", 0.06));
        pList.add(new Planet("Venus", 0.02));


        for (Planet p : pList){
            p.print();
        }

        List<String> ls = new ArrayList();
        ls.add("String 1");
        ls.add("String 2");

        print(ls);

        Collection<Planet> cp = new ArrayList();
        cp.add(new Planet("Mercury", 0.06));
        cp.add(new Planet("Venus", 0.02));

        print(cp);
    }

    public static void print(Collection<?> collection){
        for (Object o : collection) {
            System.out.println(o);
        }
    }
}
