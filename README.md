# Arduino_Displayda_isim_yazma
Arduino ile ortak anotlu 7 segment display kontrol edilerek displayda isim yazdırılabilir.
Displayın datasheeti world belgesi olarak yüklenmiştir.
Display a-7, b-8 ,c-4, d-3, e-2, f-6, g-5 sıralaması display terminallerine giden pinlerin sırasıdır. Kodlarım bu sıraya göre yazılmıştır. 📌
Vcc terminali ön diren koyarak arduinodan gelen 3.3V veya 5V pinlerine bağlayınız!!📌
Displayınızın ortak anot mu yoksa ortak katotmu olduğunu anlamak için; Vcc terminaline ön direnç ile pilinizin + sını veriniz. Pilinizin GND sini test bacağı olan 5. pine veriniz. Sağ alttaki test ledi yanıyorsa displayiniz ortak anotludur. Yanmıyorsa ortak katotludur.
Buradaki kodlar ortak anotlu displaye göre yapılmıştır. Ortak anotlu displayda pinleri aktif yapmak için lojil "0" verilir. yani LOW edilir !
