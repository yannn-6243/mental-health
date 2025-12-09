# 🌿 Mental Health Check-in – SDG 3 (Good Health & Well-Being)

Mental Health Check-in adalah aplikasi web yang membantu pengguna **mengecek kondisi kesehatan mental secara mandiri** melalui pengisian kuesioner sederhana. Tujuan proyek ini adalah meningkatkan kesadaran kesehatan mental terutama pada pelajar/mahasiswa, sekaligus mendukung **Sustainable Development Goal 3 – Good Health and Well-Being**.

Aplikasi ini **bukan alat diagnosis profesional**, namun dapat menjadi **refleksi awal** sebelum mencari bantuan lebih lanjut.

---

##  Fitur Utama

- 🧠 **Tes Kesehatan Mental**
  - Kuesioner dengan skala skor (0–3)
  - Mendukung **reverse scoring** untuk akurasi penilaian

- ⚙️ **Mesin Skoring C++ → WebAssembly**
  - File `scorer.cpp` dikompilasi ke **WASM** untuk eksekusi langsung di browser
  - Menghasilkan kategori kondisi mental berdasarkan persentase skor:
    | Persentase | Kategori |
    |-----------|----------|
    | 0 – 25% | Baik / Kondisi Stabil |
    | 26 – 50% | Perlu Perhatian Diri |
    | 51 – 75% | Butuh Konsultasi Ringan |
    | 76 – 100% | Butuh Konsultasi Profesional |

- 📊 **Hasil & Saran**
  - Menampilkan skor akhir + kategori
  - Memberikan rekomendasi singkat sesuai hasil

- ⏳ **Riwayat Tes (Opsional)**
  - Frontend dapat menyimpan histori hasil secara lokal atau via backend

- 🎨 **UI/UX Modern**
  - Tailwind CSS, responsif, ringan
  - Variasi warna emerald dan dukungan **dark mode**

---

## 🧩 Teknologi yang Digunakan

| Layer | Teknologi |
|-------|-----------|
| Frontend | HTML · CSS · JavaScript · Tailwind |
| Scoring Engine | C++ → WebAssembly (Emscripten) |
| Backend (opsional) | Python / Flask / FastAPI · Railway |
| Deployment (opsional) | Railway / Netlify / Vercel |

---

## 📂 Struktur Direktori (contoh)

mental_health/
├─ index.html
├─ style.css
├─ main.js
├─ scorer.cpp
├─ scorer.js / scorer.wasm
├─ backend/ (opsional)
└─ README.md

> Struktur dapat berbeda sesuai pengembangan selanjutnya.

---

## ▶️ Cara Menjalankan Secara Lokal


### 1. Frontend

git clone https://github.com/hadyan123/mental_health.git
cd mental_health
Lalu buka index.html di browser atau gunakan server lokal:

python -m http.server 8000

Akses:
http://localhost:8000


### 2. . Build Ulang WebAssembly (Jika scorer.cpp Diubah)
emcc scorer.cpp \
  -s WASM=1 \
  -s EXPORTED_FUNCTIONS='["_classify", "_hitung_skor"]' \
  -s EXPORTED_RUNTIME_METHODS='["cwrap"]' \
  -o scorer.js
  
  Pastikan Emscripten terinstall. Kemudian jalankan:
emcc scorer.cpp \
  -s WASM=1 \
  -s EXPORTED_FUNCTIONS='["_classify", "_hitung_skor"]' \
  -s EXPORTED_RUNTIME_METHODS='["cwrap"]' \
  -o scorer.js
  
 
  ---
  
## 🛠️ Rencana Pengembangan Ke Depan

- Grafik perkembangan riwayat skor
- Ekspor hasil ke PDF
- Sistem akun dengan privasi yang aman
- Halaman informasi kontak bantuan & hotline nasional
- Dukungan multi-bahasa (ID • EN)
- Kontribusi ide lainnya sangat terbuka 👇

---
## 📬 Kontak

Jika ingin memberi saran, masukan, atau berkolaborasi:

GitHub: @yannn-6243
GitHub: @nazeeia





