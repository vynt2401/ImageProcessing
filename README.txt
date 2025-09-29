🖼️ Image Processing Workflow with Python and C

📦 Mô tả dự án

Dự án này thực hiện xử lý ảnh bằng cách kết hợp Python và C. Ảnh đầu vào là lena.png, được chuyển thành dữ liệu thô (raw.dat) bằng Python, sau đó được xử lý tiếp bằng chương trình C để tạo ra các file ảnh ở định dạng xám (gray.dat) và nhị phân (bin.dat).

🧰 Các bước thực hiện

1️⃣ Tạo môi trường Python

python -m venv venv

Kích hoạt môi trường:

Windows (PowerShell):

.\venv\Scripts\Activate.ps1

Windows (CMD):

venv\Scripts\activate.bat

Linux/macOS:

source venv/bin/activate

2️⃣ Cài đặt các thư viện cần thiết

pip install -r requirements.txt

File requirements.txt chứa danh sách các thư viện cần thiết để chạy file Python.

3️⃣ Chạy chương trình Python để tạo file raw.dat

python docFileAnh.py

File docFileAnh.py sẽ đọc ảnh lena.png và xuất dữ liệu thô ra file raw.dat.

4️⃣ Tắt môi trường Python

deactivate

5️⃣ Biên dịch và chạy chương trình C

gcc convert.c -o convert
./convert

Chương trình convert.c sẽ đọc dữ liệu từ raw.dat và tạo ra hai file:

gray.dat: ảnh mức xám

bin.dat: ảnh nhị phân

📁 Cấu trúc thư mục

project-folder/
│
├── lena.png
├── docFileAnh.py
├── convert.c
├── requirements.txt
├── raw.dat
├── gray.dat
├── bin.dat
└── README.md

📌 Ghi chú

Đảm bảo đã cài đặt gcc để biên dịch chương trình C. Nếu chưa, bạn có thể cài MinGW hoặc sử dụng WSL.

Ảnh lena.png cần được đặt đúng vị trí để chương trình Python có thể đọc được.

✅ Kết quả mong đợi

Sau khi thực hiện đầy đủ các bước, bạn sẽ thu được:

raw.dat: dữ liệu ảnh gốc

gray.dat: ảnh chuyển sang mức xám

bin.dat: ảnh chuyển sang nhị phân

---
