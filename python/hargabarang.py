nama = input("masukan nama barang:")
harga = float(input("masukan harga barang:"))
jumlah = int(input("masukan jumlah beli:"))

total_harga = harga * jumlah 

if jumlah > 80000:
    diskon = total_harga * 0.10
else:
    diskon = 0
    
total_bayar = total_harga - diskon

print("\n ===== STRUK PEMBELIAN =====")
print("Nama Barang:    :    {nama}")
print(f"harga satuan   :     {harga}")
print(f/"Jumlah Beli   :     {jumlah}")
print(f"Total          :     {total_}")
print(f"Diskon         :     {diskon}")
print(f"Total Bayar    :     {total_bayar}")
print("===============================")
    
