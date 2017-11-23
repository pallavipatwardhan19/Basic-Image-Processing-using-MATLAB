%%Here basic Arithmatic operations such as Addition, Subtraction, Multiplication, Division are performed on given 2 images using inbuilt functions in MATLAB

clc;
clear all;
i=input('Enter URL: ','s')
a=imread(i);
subplot(4,2,1)
imshow(a)
title('Original image 1')

i=input('Enter URL: ','s')
b=imread(i);
subplot(4,2,2)
imshow(b)
title('Original image 2')

c=rgb2gray(a);					%%Converting Image to Grayscale
[m n]=size(c);
subplot(4,2,3)
imshow(c)
title('Grayscale image 1')

c2=rgb2gray(b);
d=imresize(c2,[m n]);
subplot(4,2,4)
imshow(d)
title('Grayscale image 2')

e=imadd(c,d);					%%Addition of images
subplot(4,2,5)
imshow(e)
title('Addition of image1 and image2')

f=imsubtract(c,d);				%%Subtraction of images
subplot(4,2,6)
imshow(f)
title('Subtraction of image1 and image2')

g=immultiply(c,d);				%%Multiplication
subplot(4,2,7)
imshow(g)
title('Multiplication of image1 and image2')

h=imdivide(c,d);					%%Division
subplot(4,2,8)
imshow(h)
title('Division of image1 and image2')

display('Mean image1')				
j=mean2(c)
display('Mean image2')
k=mean2(d)
