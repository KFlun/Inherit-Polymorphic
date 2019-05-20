# Inherit&Polymorphic
这个关于学习继承和多态的摸索总结。
## 几何图形中类的继承关系
### 题目概述
![image](https://github.com/KnifeofLondon/Inherit-Polymorphic/blob/master/%E5%87%A0%E4%BD%95%E5%9B%BE%E5%BD%A2%E4%B8%AD%E7%B1%BB%E7%9A%84%E7%BB%A7%E6%89%BF%E5%85%B3%E7%B3%BB/QQ%E6%88%AA%E5%9B%BE20190518102531.png)  
对平面图形可求周长和面积，对立体图形可以求体积以及底面图形的周长和底面积。
设有主函数如下：
```
int main()
{
	Geometric_shape * gs[] = { new Circle(10),new Rectangle(6,8),new Triangle(3,4,5),new Box(6,8,3),new Cylinder(10,3),new Cone(10,3),new T_pyramid(3,4,5,3), new T_prism(3,4,5,3)};

	for (int i = 0; i < 8; i++)
	{
		gs[i]->show();
		cout << endl;
	}

	cout << "平面图形：" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "图形周长：" << gs[i]->perimeter() << '\t';
		cout << "图形面积：" << gs[i]->area() << endl;
	}
	cout << "立体图形：" << endl;
	for (int i = 3; i < 8; i++)
	{
		cout << "图形底周长：" << gs[i]->perimeter() << '\t';
		cout << "图形底面积：" << gs[i]->area() << '\t';
		cout << "图形体积：" << gs[i]->volume() << endl;
	}
	system("pause");
	return 0;
}
```
请编写各类的定义和实现代码，使给定的主函数main 可以正确运行。
### 设计思路
&emsp;&emsp;观察类图的继承关系，从初始类“几何图形”中派生出了三个子类“矩形”、“圆形”、“三角形”，又分别派生出“长方体”，“圆柱”，“圆锥”，“三棱锥”，“三棱柱”。再观察主函数，对几何图形类进行抽象，得到其中包含三个成员函数，无数据成员。平面图形继承几何图形，加上自身的数据成员。在此基础上，三个平面图形重写从几何图形中继承的成员函数。最后5个立体图形继承分别继承自对应的平面图形，这时面积和底面周长的计算函数已经从平面图形继承过来，只需要对体积计算的函数进行重写，减少了代码重复。
### 小结
#### 继承
1、通过继承得到的数据成员如果在父类中的访问权限为private则不可别子类直接调用，若为protected或public则可以。  
2、子类继承父类后，如果不对父类的成员函数进行重写则可以直接使用父类的成员函数。 ***确定？*** 如果对成员函数进行重写则在子类中实际包含了两个该名字的函数。如下所示：在子类Circle中包含两个show函数，分别为父类的和自己对父类show函数的重写。
```
class Geometric_shape
{
public:
	virtual void show() {};
	 …………（略）  
};

class Circle:public Geometric_shape
{
public：
	virtual void show() { cout << "构造一个圆"; };
	 …………（略）
private:
	double r;
};
```
