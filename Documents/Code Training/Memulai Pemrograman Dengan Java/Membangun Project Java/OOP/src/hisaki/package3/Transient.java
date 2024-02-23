package hisaki.package3;

import java.io.Serializable;


// Konversi objek menjadi byte dengan tidak menjaga nilainya
class Transient implements Serializable{
    // Variabel ini tidak akan dijaga nilainya
    transient int isValue;

    // Variabel ini dijaga nilainya
    double isValueA;
    String isWordsB;
}
