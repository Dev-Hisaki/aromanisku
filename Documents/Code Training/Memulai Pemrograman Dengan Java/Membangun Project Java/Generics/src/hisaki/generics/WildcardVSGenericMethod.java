package hisaki.generics;

import java.util.ArrayList;
import java.util.Collection;

public class WildcardVSGenericMethod {
    // Menggunakan wildcard
    static void print(Collection<?> collection){
        for (Object object : collection) {
            System.out.println(object);
        }
    }

    // Menggunakan Generic Method
    static <T> Collection arrayToCollection(T[] typeT) {
        Collection<T> tCollection = new ArrayList();
        for (T tObject : typeT) {
            tCollection.add(tObject);
        }
        return tCollection;
    }

    public static void main(String[] args) {
        String[] stringA = {"Happy", "Coding"};
        print(arrayToCollection(stringA));
    }
}
