package main

import (
	"fmt"
	"os"
	"time"
)
var egg = []int {104, 115, 121, 121, 100, 115}
var var1 = [] int {167,38,65,71,210,47,177,14,20,123,151,40,164,113,81,69,193,122,149,120}
var wrong string = "Time does not wait for anyone,so let's GOOOOOOOO!"
var CanuFindme string = "5_amaz1ng}"
//var flag string = "moectf{G0_1an8uag3_15_amaz1ng}"
func fun1() []int{
	var sBox = []  int{172, 245, 49, 252, 159,141, 29, 85, 25, 91,125, 241, 36, 34, 94,187, 114, 219, 64, 114,53, 155, 238, 249, 199,88, 108, 145, 111, 64,120, 238, 144, 149, 36,155, 26, 98, 74, 252,94, 241, 110, 20, 183,104, 211, 16, 235, 27,34, 9, 30, 30, 205,44, 127, 176, 174, 65,166, 249, 241, 118, 77,155, 79, 48, 93, 2,25, 52, 121, 98, 110,244, 207, 238, 172, 248,38, 41, 147, 233, 58,183, 230, 163, 217, 166,193, 126, 197, 104, 93,73, 15, 52, 188, 210,1, 82, 73, 79, 149,69, 115, 237, 223, 81,123, 152, 253, 31, 211,105, 185, 20, 189, 70,55, 19, 104, 84, 28,194, 237, 124, 8, 98,127, 153, 193, 117, 122,94, 81, 252, 28, 78,116, 31, 235, 34, 169,22, 117, 81, 210, 61,76, 214, 102, 38, 34,90, 241, 216, 216, 217,240, 115, 114, 194, 218,90, 102, 156, 256, 179,199, 143, 205, 167, 12,82, 234, 83, 211, 127,8, 58, 100, 3, 117,197, 5, 95, 145, 221,152, 29, 145, 184, 29,12, 218, 70, 47, 83,230, 48, 246, 30, 54,66, 243, 87, 132, 205,84, 113, 201, 103, 9,204, 62, 170, 77, 148,237, 175, 218, 51, 42,133, 150, 116, 28, 159,117, 35, 32, 167, 84,174, 117, 95, 118, 197,177, 14, 83, 256, 168,138, 160, 31, 172, 225,34, 202, 144, 73, 134,146,
	}
	j:=0
	t:=0
	for i:=0;i<256;i++ {
		j = (j+sBox[i]+egg[i%6])%256
		t = sBox[i]
		sBox[i] = sBox[j]
		sBox[j] = t
	}
	return sBox

}

var Box = fun1()
func fun2( a int  ) string{
	if a<0 {
		fmt.Print(CanuFindme)
	}
	var t int
	t = var1[a]
	t = t ^ Box[egg[a%6]]
	return string(t)
}

func main() {
	fmt.Println("welcome to moectf2021!")
	fmt.Println("↓↓↓↓Here's your flag↓↓↓↓")
	var start = time.Now()
	for i:=0;i<20;i++ {
		timer:=i<<2
		fmt.Print(fun2(i))
		//fmt.Println(time.Since(start))
		time.Sleep(time.Duration(timer%15) * time.Second)
		end := time.Since(start)
		if (end.Seconds())>55 {
			fmt.Println("\n++++++++++++++++++++++++++++++++++")
			fmt.Println(end,"have passed. Anything wrong???")
			fmt.Println(wrong)
			fmt.Println("++++++++++++++++++++++++++++++++++")
			time.Sleep(99*time.Second)
			os.Exit(114514)
		}

	}
	fmt.Println("\n++++++++++++++++++++++++++++++++++")
	fmt.Println("Congratulations!!!!")
	fmt.Println("You are very close to success!!")
	fmt.Println("Try to find the remaining flag!!")
	fmt.Println("++++++++++++++++++++++++++++++++++")
	time.Sleep(99*time.Second)
}
