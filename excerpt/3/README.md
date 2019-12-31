# 函数和函数模板

## 函数的参数及其传递方式

C 语言函数参数的传递方式只有传值一种，而 C++ 函数参数有两种传递方式：传值和传引用。传引用传递的是对象的地址，所以也称传地址方式。

在 C++ 中，当函数参数需要传递地址时，建议使用引用来代替指针（指针方式属于 C 语言风格），因此引用比指针更加直观。在下面三种情况中，引用参数十分有用：
- 要从函数中返回多个值；
- 通过函数调用要改动实参值；
- 传递地址可以节省拷贝大量数据所需的内存空间和时间；

## 函数返回值

函数可以返回一个引用，也可以返回存储某种类型数据的地址，函数的返回值也可以是一个对象。函数的返回值作为另一个函数的参数时，该返回值必须与参数的类一致。

内联函数：程序中关键字 `inline` 可以将函数说明成内联函数。其实用方法和一般函数一样，当 C++ 编辑器执行到该函数的调用语句时不产生实际函数调用，而是用该函数体替换调用表达式。