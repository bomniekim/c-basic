
//6杉24析 壱舛社呪繊引 採疑社呪繊 妊奄号狛
/*
#include <stdio.h>

void main()
{
	float a = 10.1234567890123456789;
	double b = 10.1234567890123456789;

	//float(4byte)引 double(8byte)税 託戚繊 :  社呪繊 戚板税 葵税 舛溌失

	printf(" %.20f  \n", a); // 10.12345695495605468750
	printf(" %.20lf  \n", b); // 10.12345678901234613534    double析凶亜 舛溌亀亜 販樟 株製 <- 希 識硲

}*/
/*
【【【【【
int a = 10; // 痕呪 '段奄鉢' (initialize): a税 因娃聖 幻級檎辞 切端税 床傾奄葵聖 走酔壱 10聖 脊径 (切端稽 4byte託走) 紺亀税 五乞軒 因娃 託走 X

int a;    // 痕呪 識情, 五乞軒拭 因娃聖 拝雁 閤澗陥 (RAM拭 赤澗 因娃聖 託走廃陥.)
a = 10; // 痕呪拭 葵 '企脊' 【(神献楕 五乞軒 因娃聖 copy背辞 図楕 五乞軒 因娃拭 paste)【
			 //(a虞澗 4byte税 + 10戚虞澗 4byte = 五乞軒拭辞 8byte 託走)

		 //是人 焼掘税 葵精 旭走幻 五乞軒拭辞 疑拙馬澗 号狛戚 陥硯


float a;
a = 3.14; //叔呪澗 "奄沙戚 double (8byte)"戚糠稽 琶推蒸澗 五乞軒税 因娃聖 涯搾 ->double拭辞 float生稽 設験艦陥. (error)
a = 3.14f; //f研 細戚檎 蕉段拭 float(4byte)生稽 竺舛鞠嬢 4byte幻 託走馬惟 喫
【【【【【 */

/*
string聖 幻級走 公廃 戚政: 紫遂切拭惟辞 脊径閤聖 汽戚斗税 byte研 亜監拝 呪 蒸醸奄 凶庚/ 績税稽 舛拝 獣 格巷 弦精 遂勲 託走
									   -> '壕伸'稽 坦軒
									   */



 /* 雌呪
1. literal雌呪
2. 古滴稽雌呪
3. 雌呪鉢吉 痕呪(const)
*/

 //古滴稽雌呪
  #define MAX 10
  #define p printf

  void main()
  {
	  printf(" %d", MAX);
	  p("Hello"); //せせせせせせ
  }

//const 雌呪 (雌呪鉢吉 痕呪) 切郊拭辞澗 final
  void main()
  {
	  const int a = 10; //痕呪葵 壱舛
	  const int a;
	  a=10;                  //戚 井酔拭澗 据掘 a拭 赤揮 床傾奄葵戚 壱舛吉暗-> 戚係惟 馬走原
	  
	  
	  a = 20;// a澗 神嫌, a澗 10生稽 freezing吉 雌呪葵
									   }

								