%%Here basic Logical operations such as Logical AND, OR, XOR, Complement of image are performed on given 2 images using inbuilt functions in MATLAB

clc;
clear all;
close all;
 
i=input('Enter URL: ','s')
A=imread(i);
A1=rgb2gray(A);
A2=imresize(A1,[300,300]);
 
i=input('Enter URL: ','s')
B=imread(i);
B1=rgb2gray(B);
B2=imresize(B1,[300,300]);
 
A3=uint8(A2);                    %% Converts image A into unsigned 8bit image
B3=uint8(B2);
 
subplot(3,2,1)
imshow(A1);                     %%Displays image A1
title('Origina Image A');
subplot(3,2,2);
imshow(B3);
title('Original Image B');
 
L1=bitand(A1,B3);               %% Logical operation AND is performed on images A1 and B1
subplot(3,2,3);
imshow(L1);
title('Bitwise AND operation on A and B');
 
L2=bitor(A1,B3);                %% Logical operation OR is performed on images A1 and B1
subplot(3,2,4);
imshow(L2);
title('Bitwise OR operation on A and B');
 
L3=bitxor(A1,B3);               %% Logical operation XOR is performed on images A1 and B1
subplot(3,2,5);
imshow(L3);
title('Bitwise XOR operation on A and B');
 
L4=bitcmp(B3);                  %% Image A1 is complemented
subplot(3,2,6);
imshow(L4);
title('Complement of image B');
