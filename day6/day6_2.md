练习题2.21  
```
int fun1(ungsigned word )
{  
    return(int)((word<<24)>>24);  
}
int fun2(unsigned word)
{
    return((int)word<<24)>>24;
}
```
| w | fun1(w) | fun2(w) |
|---| -----|---------|
|127 | 127| 127|
|128 | 128|-128|
|255 | 255|-1|
|256 |0 |0 |
ps：注意区分算数右移和逻辑右移