import java.util.Scanner;

public class nilai {
    public static void main (String[] args) {
      try ( Scanner sc = new Scanner(System.in)) {
        System.out.print("Masukkan Nilai Tugas : ");
        double tugas = sc.nextDouble();
        System.out.print("Masukkan Nilai UTS : ");
        double uts = sc.nextDouble();
        System.out.print("Masukkan Nilai UAS : ");
        double uas = sc.nextDouble();

        double nilaiAkhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

        System.out.println("Nilai Akhir : " + nilaiAkhir);
        if (nilaiAkhir>=60)
        System.out.println("Status : LULUS");
        else
        System.out.println("Status : TIDAK LULUS");
       }
    }
}