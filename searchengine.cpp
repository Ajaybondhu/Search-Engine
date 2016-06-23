#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#define no_of_countries_in_asia 50

int hash_function(char *country){
	int key=0;
	for(int i=0;country[i]!=NULL;i++)
		key=key+country[i];
	return (key%no_of_countries_in_asia);
}
/*
char *hash_table[no_of_countries_in_asia]={"Singapore","Thailand","Syria","Maldives","Mongolia","Sri Lanka","Afghanistan","Myanmar","Indonesia","Pakistan","Arab","Kuwait","Vietnam","Russia","Jordan","China","Cambodia","India","Palestine","Turkmenistan","Yemen","Bhutan","Japan","Kazakhstan","Tajikistan","Bahrain","Kyrgyzstan","Oman","Nepal","Iraq","Turkey","Laos","Iran","Bangladesh","Cyprus","Lebanon","Georgia","Qatar","Uzbekistan","Philippines","Israel","Armenia","Saudi Arabia","South Korea","Taiwan","Brunei","Timor-Leste","Azerbaijan","North Korea","Malaysia"};
char *currency[no_of_countries_in_asia]={"Singapore dollar","Baht","","",""};
char *capital[no_of_countries_in_asia]={"Singapore","bangkok","","",""};
char *language[no_of_countries_in_asia]={"Roman","Thai","","",""};
char *religion[no_of_countries_in_asia]={"","","","",""};
long int area[no_of_countries_in_asia]={718.3,513120,185180,};
long int population[no_of_countries_in_asia]={5469700,67200000,};
int states[no_of_countries_in_asia]={0,0,};
  */





char *hash_table[no_of_countries_in_asia]={"Singapore",
"Thailand",
"Syria",
"Maldives",
"Mongolia",
"SriLanka",
"Afghanistan",
"Myanmar",
"Indonesia",
"Pakistan",
"Arab",
"Kuwait",
"Vietnam",
"Russia",
"Jordan",
"China",
"Cambodia",
"India",
"Palestine",
"Turkmenistan",
"Yemen",
"Bhutan"
,"Japan",
"Kazakhstan",
"Tajikistan",
"Bahrain",
"Kyrgyzstan",
"Oman",
"Nepal",
"Iraq",
"Turkey",
"Laos",
"Iran",
"Bangladesh",
"Cyprus",
"Lebanon",
"Georgia",
"Qatar",
"Uzbekistan",
"Philippines",
"Israel",
"Armenia",
"Saudi Arabia",
"SouthKorea",
"Taiwan",
"Brunei",
"Timor-Leste",
"Azerbaijan",
"NorthKorea",
"Malaysia"};
float population[no_of_countries_in_asia]={5.5,
67.01,
22.85,
345.023,
2.893,
2.027,
30.55,
53.26,
249.9,
182.1,
365.0,
674.0,
964.0,
3.369,
89.71,
143.5,
6.459,
1.357,
15.14,
1.252,
4.4,
5.24,
24.41,
753.0,
947.0,
127.3,
17.04,
8.208,
1.332,
5.72,
3.632,
27.8,
33.42,
74.93,
6.77,
77.45,
156.6,
1.141,
4.467,
4.477,
2.169,
30.24,
98.39,
8.059,
2.977,
28.83,
50.22,
23.34,
41.77,
1.178,
9.417,
24.9,
29.72};
char *religion[no_of_countries_in_asia]={"buddism",
"buddism",
"islam",
"islam",
"buddism",
"theravada buddist", 
"islam","buddism",
"Islam,Protestantism,Catholicism,Hinduism,Buddhism,Confucianism",
"islam",
"islam",
"islam",
"islam",
"islam",
"folk",
"christianity",
"muslims",
"taoism",
"Buddhism ",
"hinduism",
"muslims",
"islam",
"islam",
"vajrayana buddhism",
"shinto",
"islam",
"islam",
"islam",
"islam",
"islam",
"hinduism,buddism",
"islam",
"buddhism",
"islam",
"islam",
"islam",
"islam",
"greek orthodox",
"druze",
"christianity",
"islam",
"filipina",
"islam",
"armenian apostical church",
"islam",
"buddism"
,"buddism",
"sunni islam",
"catholic faith",
"shia islam",
"buddism","islam"};
char *currency[no_of_countries_in_asia]={"Singaporedollar",
"Baht",
"pound",
"maldiviyan rufiyaa",
"togrog",
"lkr",
"afghan afghani",
"kyat",
"indonesianrupiah",
"rupees",
"riyal",
"kuwaitidinar",
"Vietnamesedong",
"ruble(rub)",
"jordanian dinar",
"renminbi",
"riel",
"rupees",
"United Arab Emirates dirham",
" Turkmn new manat",
"yer",
"bhutanese ngultrum",
"japanese yen",
 "kazakstan tenge",
"somoni",
"bahrain  dinar",
"kyrgyzstan som",
"rial(omr)",
"rupee",
"iraqi dinar",
"Turkish lira"
," laokip" , 
"iranian rial",
"taka",
"euro",
"lebanese pound",
"lari",
"riyal",
"Uzbekistan som",
 "peso",
"israeli new shekel",
"dram",
"saudi riyal",
"krw",
"new taiwan dollar",
"brunei dollar",
"dollor",
"manat",
"won",
"ringgit"};
char *capital[no_of_countries_in_asia]={"Singapore","bangkok","damascus","male",
"ulan bator","coloumbo"," kabul","naypyidaw","jakartha","islamabad","0","kuwaitcity", "hanoi","moscow","amman ","beijing","phnom penh","new delhi","0","Ashgabat","sana?a" , "thimphu","tokyo","astana","dushanbe","manama","bishkek","muscat","kathmandu",
"baghdad","ankara","vientane","tehran","dhaka","nicosia","tibilisi","doha","tashkent",
"manila","jerusalem","yerevan","riyadh","seoul","taipei","bandar seri bagwan","dili",
"baku ","pyongyang"," kuala lampur"};
char *language[no_of_countries_in_asia]={"Roman","Thai","beirut","dhivehi",
"sinhala","pasto - dari","burmese","indonesian","urdu","0","arabic","vietnamese",
"russian","arabic","standard chinese","khmer","hindi","0","Turkmen","arabic","dzonkha",
"japanese","kazakh,russian","russian,tajik","arabic","Kyrgyz ,Russian ","omani arabic",
"nepali","arabic","turkish","lao","arabbic-kurdish","bengali","greek turkish","arabic",
"georgian","qatari","uzbek","filipino","hebrew,arabic","armenian","arabic",
"korean","taiwamiese hokkine","russian","malay","Tetum portuguese","azerbaijani",
"korean","dhivehi"};
float area[no_of_countries_in_asia]={718.3,513.120,185.180,298.115,1564115.75,
65.61,652.86,676.57,1.904.569,803.940,0,17.820,332.698,17.098.242,89.342,9.596.96,
181.035,3.287.590,6.220,491.210,527.967,38.394,377.944,2.724.900,143.100,765.0,199.951,
309.501,147.181,437.072,783.562,236.800,1.648.195,147.570,9.251,10.452,69.700,11.575, 448.978,300.00,22.072,29.743,2.149.690,100.210,36.193,5.765,15.007,86.600,10.540,329.847};
char *climate[no_of_countries_in_asia]={"hot,humid","high humidity","humid","sunlit days,breezy nights,balmy mornings,iridescent sunsets","continental","arid to  semiarid","monsoon","tropical with high humidity","moderate","0","dry hot long summer , short wet winter","dry,wet","continental","hot dry summer , cool wet winters",
"winter cold & dry , summer hot & rainy","warm hot","wet & dry climate","moderate",
"cold desert","subtropical dry and hot","hot , humid subtropical"," cold winter", "continental climate eith cold winter & hot summer","arid","hot summer & mild winter ","subtropical dry and hot","spring,hot,warm","hot dry summers , short cool winters",
"hot,dry","tropical mansoon","hot & dry","monsoon","meditteranean &semiarid",
"humid","humid subtropical","hot,humid","contenintal","monsoon,humid","meditteranian climate ,hot & dry","sunny","high temparatures","humid","subtropical",
"tropical equatorial","warm summer & very cold dry winter","conteinential,oceanic",
"tropical rainforest",};
int states[no_of_countries_in_asia]={1,76,14,25,1,19,21,65,4,0,3,5,10,10,14,10,29,5,32,
39,10,3,34,1,10,25,47,14,10,18,17,8,16,6,19,55,8,28,144,14,49,10,6,22,5,42,9,5,25};
float  longitude[no_of_countries_in_asia]={1.3000,13.7500,33.5000,3.2000, 46.0000,7.0000,69.160652,22.0000,6.1750,33.6667,24.4667,29.3667,21.03,3360.0000,31.9500,35.0000,11.5500,21.0000,31.6253,37.9667,35.6833,48.0000,38.5500,26.0275,42.8667,23.6000,26.5333,33.3333,23.7000,17.9667,32.0000,23.7000,35.0000,33.9000,32.9605,25.3000,41.0000,40.18333,24.0000,
22.0,23.5000,4.8903,8.5667,40.3000,40.0000,3.1333};
float  latitude[no_of_countries_in_asia]={103.8000,100.4833,36.3000,73.2200,105.0000,81.0000,34.543896,96.0000,106.8283,73.1667,54.3667,47.9667,105.8500,90.0000,35.9333,103.0000,104.9167,78.0000,35.1453,58.3333,48.0000,90.4350,139.7667,86.7333,44.4333,139.7667,68.000,68.8000,50.5500,74.6000,58.5500,86.7333,44.4333,90.3500,33.0000,35.5333,51.5167,69.0000,122.0000,35.0000,44.1567,45.0000,129.3650,121.0000,114.9422,125.5667, 47.70000,127.0000, 101.7000};




void list_of_countries(){
	for(int i=0;i<no_of_countries_in_asia;i++)
		cout<<endl<<hash_table[i];
}

void main(){
	int key=0,option;
	char *country;
	clrscr();
	do{
		cout<<"enter your option\n 1.search details about counties in asia \n 2.display all countries present in asia\n 3.exit\n";
		cin>>option;
		switch(option){
			case 1:  cout<<"\n enter country name: ";
				cin>>country;
				key=hash_function(country);
				int key_copy=key;
				cout<<country<<endl<<hash_table[key];
				do{
					while(strcmpi(country,hash_table[key])){
						if(key==(no_of_countries_in_asia-1))
							key=0;
						else
							key++;
					}
				}while(key!=key_copy);
				if(strcmpi(country,hash_table[key]))
					cout<<"country not in our database";
				else
					cout<<"details of "<<hash_table[key]<<" are:"<<endl<<"area "<<area[key]<<endl<<"population "<<population[key]<<endl<<"states "<<states[key]<<endl<<"currency "<<currency[key]<<endl<<"capital "<<capital[key]<<endl<<"language "<<language[key]<<endl<<"religion "<<religion[key]<<endl;
				getch();
				break;
			case 2:       cout<<"\n list of countries in asia: ";
				list_of_countries();
				getch();
				break;
			case 3:       option=100;
				break;
			default:     cout<<"\n entered wrong option";
				break;
		}
	}while(option!=100);
	exit(0);
	
}
