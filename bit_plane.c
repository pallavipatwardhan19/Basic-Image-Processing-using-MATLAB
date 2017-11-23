%%Here, an RGB image is divided into 8-bit planes 

clc;
clear all;
close all;

i=input('Enter URL: ','s')
img1=imread(i);
img2=rgb2gray(img1);			%%Converting RGB image to grayscale
img=double(img2);
subplot(4,2,1)
imshow(img2)
title('gray scale of original image')

[m n]=size(img)			
for i=1:m					%%For seperating bit-planes
     for j=1:n
         b=de2bi(img(i,j),8);
         b0(i,j)=b(1,1);
         b1(i,j)=b(1,2);
         b2(i,j)=b(1,3);
         b3(i,j)=b(1,4);
         b4(i,j)=b(1,5);
         b5(i,j)=b(1,6);
         b6(i,j)=b(1,7);
         b7(i,j)=b(1,8);
     end
end

subplot(4,2,2)
imshow(b0)				%%Stores Least important information of image
title('bit plane 0-LSB');

subplot(4,2,3)
imshow(b1)
title('bit plane 1');

subplot(4,2,4)
imshow(b2)
title('bit plane 2');

subplot(4,2,5)
imshow(b3)
title('bit plane 3');

subplot(4,2,6)
imshow(b4)
title('bit plane 4');

subplot(4,2,7)
imshow(b5)
title('bit plane 5');

subplot(4,2,8)
imshow(b6)
title('bit plane 6');

subplot(4,2,9)
imshow(b7)
title('bit plane 7-MSB'); 		%%Contains maximum information about image
