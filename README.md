# Đây là repositories sử dụng Python + C để có thể chuyển từ ảnh đuôi .png (lena.png) --> .dat bao gồm bin.dat, gray.dat

### Có thể clone repos này về

```
git clone https://github.com/vynt2401/ImageProcessing
```
--> sau đó trỏ đến thư mục chứa repos này

### Bash Script Enviroment
### Linux 

Kiểm tra Python đã cài đặt chưa

```
#Linux (ubuntu)
python --version
```

```
#Windows
python --version
```

Nếu chưa có, có thể cài đặt thông qua

```
#Linux (ubuntu)
sudo apt-get install python3
```

```
#Windows --> có thể tải tại đây
https://www.python.org/downloads/
```

Sau đó cài đặt Virtual Enviroment 
```
#Linux (ubuntu)
python3 -m pip install virtualenv 
```

Tạo Enviroment và kích hoạt Enviroment Python

```
#Linux (ubuntu)
virtualenv venv_name
source venv_name/bin/activate
```

```
#Windows
python -m venv venv_name
.\venv_name\Scripts\activate
```

Sau khi activate Enviroment --> tải các package cần thiết

```
#Windows
pip install -r .\requirement.txt

#Linux (ubuntu)
python -m pip install requirement.txt
```

Sau khi đã tải xong các package cần thiết --> chạy chương trình để có thể đọc ảnh và output là size.txt

```
#Windows
python .\docFileAnh.py


#Linux (ubuntu)

python3 docFileAnh.py
```

Sau đó đảo qua môi GCC Compiler để chạy Source code c và deactivate môi trường Python

```
#Windows
deactivate

#Linux (Ubuntu)
deactivate  
```
Compiling source code và running Executable 

``` 
#Windows
gcc convert.c -o convert
/.convert


#Linux (Ubuntu)
gcc convert.c -o convert
./convert
```