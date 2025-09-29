from PIL import Image
import numpy as np


# read image
img = Image.open('lena.png')
width, height = img.size
print(f"size of image: {width} x {height}")
#img.show() #tao ra cua so hien thi hinh anh 

#convert to numpy array
data = np.array(img, dtype=np.uint8)

#write to raw.dat file
with open('raw.dat', "wb") as f:
    f.write(data.tobytes())
    
#write to file text.txt 
with open("size.txt", "w") as f:
    f.write(f"width: {width} x height: {height}")

