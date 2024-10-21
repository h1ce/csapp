![alt text](288ddfab2d1cbcd62b9f82676f121ea.png)

对于x<0 推不出2x<0 因为有可能发生负溢出  
而ux（unsigned）>=0几乎是显然的  
x & 7 == 7说明x的末尾三位都是1，再左移30位，最高位就是1所以<0  
ux不可能大于-1，因为-1是最大的  
x>y when x==T_min -x==x T_min it is special(取反+1)  
x*x可能发生正溢出  

(x|-x)>>31 == -1 true every bit is 1 


