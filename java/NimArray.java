import java.util.*;

public class NimArray {
    public static void main(String[] args) {
       try (Scanner input = new Scanner(System.in)) {

        // Input NIM
        System.out.print("Masukkan NIM: ");
        String nim = input.nextLine();

        // Array digit, mulai dari data kosong
        int[] digit = new int[nim.length()];

        // Pisahkan setiap karakter menjadi angka
        for (int i = 0; i < nim.length(); i++) {
            digit[i] = Character.getNumericValue(nim.charAt(i));
        }

        // Inisialisasi nilai awal
        int total = 0;
        int maks = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        // Hitung total, maks, dan min
        for (int d : digit) {
            total += d;
            if (d > maks) maks = d;
            if (d < min) min = d;
        }

        double rata = (double) total / digit.length;

        // Cetak reverse array
        System.out.print("\nReverse array: ");
        for (int i = digit.length - 1; i >= 0; i--) {
            System.out.print(digit[i] + " ");
        }

        // Output hasil
        System.out.println("\nTotal: " + total);
        System.out.println("Maksimum: " + maks);
        System.out.println("Minimum: " + min);
        System.out.println("Rata-rata: " + rata);
    }
    }
}
