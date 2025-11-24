<?php
$nama_barang = readline("Nama Barang: ");

$harga_input = readline("Harga Barang: ");
$harga = (float)$harga_input;

// 3. Ambil input Jumlah Beli (String, lalu diubah ke integer)
$jumlah_beli_input = readline("Jumlah Beli: ");
// Konversi input ke integer. Jika input bukan angka, PHP akan mengonversinya menjadi 0.
$jumlah_beli = (int)$jumlah_beli_input;


// --- 💰 Proses Perhitungan ---

// Hitung Total Harga
$total_harga = $harga * $jumlah_beli;

echo "\n===============================\n";
echo "Ringkasan Perhitungan:\n";
echo "-------------------------------\n";
echo "TOTAL HARGA: **" . number_format($total_harga, 0, ',', '.') . "**\n";


// Logika Diskon
$diskon = 0; // Inisialisasi diskon
$harga_bayar = 0; // Inisialisasi harga bayar

if ($total_harga > 80000) {
    // Jika Total Harga lebih dari 80000, hitung diskon 10%
    $diskon = $total_harga * 0.10;
    $harga_bayar = $total_harga - $diskon;

    echo "Selamat! Anda mendapat diskon 10%: **" . number_format($diskon, 0, ',', '.') . "**\n";
} else {
    // Jika tidak, diskon adalah 0
    $diskon = 0;
    $harga_bayar = $total_harga; // Harga bayar sama dengan total harga

    // Output persis seperti kode HTML asli jika tidak dapat diskon:
    echo "Anda tidak mendapatkan diskon 10% : $diskon\n";
}

// Hasil Akhir
echo "HARGA BAYAR AKHIR: **" . number_format($harga_bayar, 0, ',', '.') . "**\n";
echo "===============================\n";
?>