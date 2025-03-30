/*n
o = ","
a = "KENNETH"
b = "JOSH"
c = "JAY"
d = "MARK"
e = "GREY"
f = "STEVE"
g = "ALEX"
h = "JACK"
i = "ALI"
j = "TYSON"

aa = "CLARK"
bb = "HAWARD"
cc = "LENARD"
dd = "JASON"
ee = "KURT"
ff = "JACOB"
gg = "LEO"
hh = "NEO"
ii = "KHY"
jj = "DANNY"

aaa = "JOY"
bbb = "HAPPY"
ccc = "TOM"
ddd = "JERRY"
eee = "TOMSON"
fff = "GERALD"
ggg = "MARCUS"
hhh = "STEPHEN"
iii = "HOBO"
jjj = "GET"

print(a,o,b,o,c,o,d,o,e,o,f,o,g,o,h,o,i,o,j) 
print(aa,o,bb,o,cc,o,dd,o,ee,o,ff,o,gg,o,hh,o,ii,o,jj) 
print(aaa,o,bbb,o,ccc,o,ddd,o,eee,o,fff,o,ggg,o,hhh,o,iii,o,jjj) 
u = {
a:"Age:1,Sex:Male,Date_of_birth:2/18/25,from:Philippines,weight:5kg", 
b:"Age:3,Sex:Male,Date_of_birth:3/13/22,from:America,weight:10kg", 
c:"Age:5,Sex:Male,Date_of_birth:5/15/20,from:Island,weight:20kg", 
d:"Age:6,Sex:Male,Date_of_birth:6/16/19,from:Unknown,weight:15kg", 
e:"Age:8,Sex:Male,Date_of_birth:8/18/17,from:Argentina,weight:30kg", 
f:"Age:2,Sex:Male,Date_of_birth:2/2/24,from:Angola,weight:35kg", 
g:"Age:4,Sex:Male,Date_of_birth:4/14/21,from:Armania,weight:40kg", 
h:"Age:7,Sex:Male,Date_of_birth:7/17/18,from:Belarus,weight:21kg", 
i:"Age:9,Sex:Male,Date_of_birth:9/19/16,from:Cuba,weight:25kg", 
j:"Age:10,Sex:Male,Date_of_birth:10/10/16,from:Benin,weight:34kg", 

aa:"Age:2,Sex:Male,Date_of_birth:2/22/23,from:Botswana,weight:23kg", 
bb:"Age:6,Sex:Male,Date_of_birth:6/16/19,from:Iran,weight:33kg", 
cc:"Age:7,Sex:Male,Date_of_birth:7/17/18,from:Japan,weight:17kg", 
dd:"Age:9,Sex:Male,Date_of_birth:9/19/16,from:Korea,weight:15kg", 
ee:"Age:3,Sex:Male,Date_of_birth:3/13/22,from:Libya,weight:10kg", 
ff:"Age:4,Sex:Male,Date_of_birth:4/14/20,from:Mali,weight:18kg", 
gg:"Age:10,Sex:Male,Date_of_birth:10/15/14,from:Nepal,weight:34kg", 
hh:"Age:5,Sex:Male,Date_of_birth:5/20/19,from:Pakistan,weight:26kg", 
ii:"Age:1,Sex:Male,Date_of_birth:1/2/25,from:Peru,weight:24kg", 
jj:"Age:8,Sex:Male,Date_of_birth:8/18/16,from:Portugal,weight:20kg", 

aaa:"Age:3,Sex:Female,Date_of_birth:12/21/22,from:Egypt,weight:22kg", 
bbb:"Age:5,Sex:Female,Date_of_birth:10/14/20,from:Canada,weight:20kg", 
ccc:"Age:8,Sex:Female,Date_of_birth:8/23/16,from:Brazil,weight:14kg", 
ddd:"Age:10,Sex:Female,Date_of_birth:2/12/20,from:Albania,weight:25kg", 
eee:"Age:9,Sex:Female,Date_of_birth:4/6/15,from:Israel,weight:21kg", 
fff:"Age:7,Sex:Female,Date_of_birth:5/17/18,from:Indonesia,weight:31kg", 
ggg:"Age:6,Sex:Female,Date_of_birth:3/18/19,from:Iceland:,weight:33kg", 
hhh:"Age:1,Sex:Female,Date_of_birth:1/9/25,from:Vietnam,weight:30kg", 
iii:"Age:2,Sex:Female,Date_of_birth:7/10/24,from:United _Kingdom,weight:29kg", 
jjj:"Age:4,Sex:Female,Date_of_birth:9/15/21,from:Ukraine,weight:27kg", 

}
uu = input("pick one:") 
print(u[uu]) 
*/
#include <iostream>
using namespace std;

int main(){
    string o = ",";
    string a = "KENNETH";
    string b = "JOSH";
    string c = "JAY";
    string d = "MARK";
    string e = "GREY";
    string f = "STEVE";
    string g = "ALEX";
    string h = "JACK";
    string i = "ALI";
    string j = "TYSON";

    string aa = "CLARK";
    string bb = "HAWARD";
    string cc = "LENARD";
    string dd = "JASON";
    string ee = "KURT";
    string ff = "JACOB";
    string gg = "LEO";
    string hh = "NEO";
    string ii = "KHY";
    string jj = "DANNY";

    string aaa = "JOY";
    string bbb = "HAPPY";
    string ccc = "TOM";
    string ddd = "JERRY";
    string eee = "TOMSON";
    string fff = "GERALD";
    string ggg = "MARCUS";
    string hhh = "STEPHEN";
    string iii = "HOBO";
    string jjj = "GET";
    
    cout << a << o << b << o << c << o << d << o << e << o << f << o << g << o << h << o << i << o << j << endl;
    cout << aa << o << bb << o << cc << o << dd << o << ee << o << ff << o << gg << o << hh << o << ii << o << jj << endl;
    cout << aaa << o << bbb << o << ccc << o << ddd << o << eee << o << fff << o << ggg << o << hhh << o << iii << o << jjj << endl;
    string uu;
    cout << "pick one:";
    cin >> uu;
    
    if (uu == a) {
        cout << "Age:1,Sex:Male,Date_of_birth:2/18/25,from:Philippines,weight:5kg" << endl;
    } else if (uu == b){
        cout << "Age:3,Sex:Male,Date_of_birth:3/13/22,from:America,weight:10kg" << endl;
    } else if (uu == c){
        cout << "Age:5,Sex:Male,Date_of_birth:5/15/20,from:Island,weight:20kg" << endl;
    } else if (uu == d){
        cout << "Age:6,Sex:Male,Date_of_birth:6/16/19,from:Unknown,weight:15kg" << endl;
    } else if (uu == e){
        cout << "Age:8,Sex:Male,Date_of_birth:8/18/17,from:Argentina,weight:30kg" << endl;
    } else if (uu == f){
        cout << "Age:2,Sex:Male,Date_of_birth:2/2/24,from:Angola,weight:35kg"  << endl;
    } else if (uu == g){
        cout << "Age:4,Sex:Male,Date_of_birth:4/14/21,from:Armania,weight:40kg" << endl;
    } else if (uu == h){
        cout << "Age:7,Sex:Male,Date_of_birth:7/17/18,from:Belarus,weight:21kg" << endl;
    } else if (uu == i){
        cout << "Age:9,Sex:Male,Date_of_birth:9/19/16,from:Cuba,weight:25kg" << endl;
    } else if (uu == j){
        cout << "Age:10,Sex:Male,Date_of_birth:10/10/16,from:Benin,weight:34kg" << endl;
    
    } else if (uu == aa){
        cout << "Age:2,Sex:Male,Date_of_birth:2/22/23,from:Botswana,weight:23kg" << endl;
    } else if (uu == bb){
        cout << "Age:6,Sex:Male,Date_of_birth:6/16/19,from:Iran,weight:33kg" << endl;
    } else if (uu == cc){
        cout << "Age:7,Sex:Male,Date_of_birth:7/17/18,from:Japan,weight:17kg" << endl;
    } else if (uu == dd){
        cout << "Age:9,Sex:Male,Date_of_birth:9/19/16,from:Korea,weight:15kg" << endl;
    } else if (uu == ee){
        cout << "Age:3,Sex:Male,Date_of_birth:3/13/22,from:Libya,weight:10kg" << endl;
    } else if (uu == ff){
        cout << "Age:4,Sex:Male,Date_of_birth:4/14/20,from:Mali,weight:18kg" << endl;
    } else if (uu == gg){
        cout << "Age:10,Sex:Male,Date_of_birth:10/15/14,from:Nepal,weight:34kg" << endl;
    } else if (uu == hh){
        cout << "Age:5,Sex:Male,Date_of_birth:5/20/19,from:Pakistan,weight:26kg" << endl;
    } else if (uu == ii){
        cout << "Age:1,Sex:Male,Date_of_birth:1/2/25,from:Peru,weight:24kg" << endl;
    } else if (uu == jj){
        cout << "Age:8,Sex:Male,Date_of_birth:8/18/16,from:Portugal,weight:20kg" << endl;

    } else if (uu == aaa){
        cout << "Age:3,Sex:Female,Date_of_birth:12/21/22,from:Egypt,weight:22kg" << endl;
    } else if (uu == bbb){
        cout << "Age:5,Sex:Female,Date_of_birth:10/14/20,from:Canada,weight:20kg" << endl;
    } else if (uu == ccc){
        cout << "Age:8,Sex:Female,Date_of_birth:8/23/16,from:Brazil,weight:14kg" << endl;
    } else if (uu == ddd){
        cout << "Age:10,Sex:Female,Date_of_birth:2/12/20,from:Albania,weight:25kg" << endl;
    } else if (uu == eee){
        cout << "Age:9,Sex:Female,Date_of_birth:4/6/15,from:Israel,weight:21kg" << endl;
    } else if (uu == fff){
        cout << "Age:7,Sex:Female,Date_of_birth:5/17/18,from:Indonesia,weight:31kg" << endl;
    } else if (uu == ggg){
        cout << "Age:6,Sex:Female,Date_of_birth:3/18/19,from:Iceland:,weight:33kg" << endl;
    } else if (uu == hhh){
        cout << "Age:1,Sex:Female,Date_of_birth:1/9/25,from:Vietnam,weight:30kg" << endl;
    } else if (uu == iii){
        cout << "Age:2,Sex:Female,Date_of_birth:7/10/24,from:United _Kingdom,weight:29kg" << endl;
    } else if (uu == jjj){
        cout << "Age:4,Sex:Female,Date_of_birth:9/15/21,from:Ukraine,weight:27kg" << endl;
    }else{
        cout << "No Name Was Found ,Look at the choices";
        }                        
return 0;
}
