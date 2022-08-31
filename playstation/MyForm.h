#pragma once
using namespace System::IO::Ports;
//#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
//#include<Windows.h>
#pragma warning (disable : 4996 )
//#include<mmsystem.h>
//#include<stdio.h>
//#include<Windows.h>
using namespace std;

struct timer
{
	int h, m, s, cs;
	//float single_cost, multiple_cost, other_cost;
	bool active;
};
struct menulist
{
	string data;
	float cost;
	//int count=1;

};
struct calctmp {
	float M;
	bool flag;
	timer T;
};
int h1 = 0;
timer t1[8];
menulist m[50];
//string productbought[20];
//int productboughtcount = 0;
//int count=0;
int xC;
int laoddataC = 0;
int onlyone = 0;
//float totalmoney;
float totalmoneypershift=0;
calctmp tempt [7];
menulist* RprodBought;
float* Rtm;
string* Rtype;
int* Rproductcount;
timer* Rt;
string* Rnum;
float* Rtimecostonly;
//time_t tt;
//struct tm* ti;
//time (&tt);
//ti = localtime(&tt);


void readdata()
{
	
		int i = 0;
		ifstream menu;
		menu.open("menu.csv");
		//class error{};
		while (menu.good())
		{
			string s;
			getline(menu, m[i].data, ',');
			if (m[i].data == "")
				break;
			getline(menu, s, '\n');
		/*	if (s == "")
			{
				//throw error();
				cout << "Error in excel file..." << endl;
				//MessageBox::Show("Error in excel file...", "please check excel file ");

			//	MessageBox::Show()
			}
			*/
			//break;
			m[i].cost = stof(s);
			//cout << m[i].data << ":::" << m[i].cost << endl;
			i++;
			xC = i;
			if (i > 48)
			{
				break;
			}
		}

		menu.close();
	
}

namespace playstation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ titlebar_pan;

	private: System::Windows::Forms::Button^ minmize;
	private: System::Windows::Forms::Button^ maxmize;
	private: System::Windows::Forms::Label^ Barcelona;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ homepanel;













	private: System::Windows::Forms::Timer^ timer1;

















	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;









	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


































private: System::Windows::Forms::FlowLayoutPanel^ homepanflow;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::ListBox^ listBox1;

private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ cslab1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ seclab1;
private: System::Windows::Forms::Label^ minlab1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ hourlab1;
private: System::Windows::Forms::Button^ resetbut1;
private: System::Windows::Forms::Button^ stopbut1;
private: System::Windows::Forms::Button^ startbut1;







private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton7;
private: System::Windows::Forms::RadioButton^ radioButton8;
private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::ListBox^ listBox2;

private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ cslab2;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ seclab2;
private: System::Windows::Forms::Label^ minlab2;


private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ hourlab2;
private: System::Windows::Forms::Button^ resetbut2;


private: System::Windows::Forms::Button^ stopbut2;

private: System::Windows::Forms::Button^ startbut2;


private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::RadioButton^ radioButton11;
private: System::Windows::Forms::RadioButton^ radioButton12;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::ListBox^ listBox3;

private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::Label^ cslab3;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ seclab3;

private: System::Windows::Forms::Label^ minlab3;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ hourlab3;

private: System::Windows::Forms::Button^ resetbut3;

private: System::Windows::Forms::Button^ stopbut3;

private: System::Windows::Forms::Button^ startbut3;

private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::RadioButton^ radioButton16;
private: System::Windows::Forms::RadioButton^ radioButton17;
private: System::Windows::Forms::RadioButton^ radioButton18;
private: System::Windows::Forms::RadioButton^ radioButton19;
private: System::Windows::Forms::RadioButton^ radioButton20;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::ListBox^ listBox4;

private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::Label^ cslab4;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ seclab4;

private: System::Windows::Forms::Label^ minlab4;

private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ hourlab4;

private: System::Windows::Forms::Button^ resetbut4;

private: System::Windows::Forms::Button^ stopbut4;

private: System::Windows::Forms::Button^ startbut4;

private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::RadioButton^ radioButton21;
private: System::Windows::Forms::RadioButton^ radioButton22;
private: System::Windows::Forms::RadioButton^ radioButton23;
private: System::Windows::Forms::RadioButton^ radioButton24;
private: System::Windows::Forms::RadioButton^ radioButton25;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::ListBox^ listBox5;

private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::Label^ cslab5;

private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ seclab5;

private: System::Windows::Forms::Label^ minlab5;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ hourlab5;

private: System::Windows::Forms::Button^ resetbut5;

private: System::Windows::Forms::Button^ stopbut5;

private: System::Windows::Forms::Button^ startbut5;















































































private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Label^ label14;

private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Timer^ timer3;
private: System::Windows::Forms::Timer^ timer4;
private: System::Windows::Forms::Timer^ timer5;
private: System::Windows::Forms::Label^ label16;

private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label32;



private: System::Windows::Forms::Panel^ panel17;

private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Label^ label44;


private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::RadioButton^ radioButton26;
private: System::Windows::Forms::RadioButton^ radioButton27;
private: System::Windows::Forms::RadioButton^ radioButton28;
private: System::Windows::Forms::RadioButton^ radioButton29;
private: System::Windows::Forms::RadioButton^ radioButton30;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::ListBox^ listBox6;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ cslab6;

private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ seclab6;

private: System::Windows::Forms::Label^ minlab6;

private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ hourlab6;
private: System::Windows::Forms::Button^ resetbut6;


private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::RadioButton^ radioButton31;
private: System::Windows::Forms::RadioButton^ radioButton32;
private: System::Windows::Forms::RadioButton^ radioButton33;
private: System::Windows::Forms::RadioButton^ radioButton34;
private: System::Windows::Forms::RadioButton^ radioButton35;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::ListBox^ listBox7;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ cslab7;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ seclab7;

private: System::Windows::Forms::Label^ minlab7;

private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ hourlab7;
private: System::Windows::Forms::Button^ resetbut7;


private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Timer^ timer6;
private: System::Windows::Forms::Timer^ timer7;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::TextBox^ textBox15;

private: System::Windows::Forms::Timer^ timer8;
private: System::Windows::Forms::Timer^ timer9;
private: System::Windows::Forms::Timer^ timer10;
private: System::Windows::Forms::Timer^ timer11;
private: System::Windows::Forms::Timer^ timer12;
private: System::Windows::Forms::Timer^ timer13;
private: System::Windows::Forms::Timer^ timer14;
private: System::Windows::Forms::Timer^ timer15;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Panel^ panel22;

private: System::Windows::Forms::TextBox^ PortName;

private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::DomainUpDown^ domainUpDown4;
private: System::Windows::Forms::DomainUpDown^ domainUpDown3;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::DomainUpDown^ domainUpDown6;
private: System::Windows::Forms::DomainUpDown^ domainUpDown5;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::DomainUpDown^ domainUpDown8;
private: System::Windows::Forms::DomainUpDown^ domainUpDown7;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::DomainUpDown^ domainUpDown10;
private: System::Windows::Forms::DomainUpDown^ domainUpDown9;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::DomainUpDown^ domainUpDown12;
private: System::Windows::Forms::DomainUpDown^ domainUpDown11;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::DomainUpDown^ domainUpDown14;
private: System::Windows::Forms::DomainUpDown^ domainUpDown13;
private: System::Windows::Forms::Label^ label69;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;























































































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->titlebar_pan = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->Barcelona = (gcnew System::Windows::Forms::Label());
			this->minmize = (gcnew System::Windows::Forms::Button());
			this->maxmize = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->homepanel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->PortName = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->homepanflow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->seclab1 = (gcnew System::Windows::Forms::Label());
			this->minlab1 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hourlab1 = (gcnew System::Windows::Forms::Label());
			this->resetbut1 = (gcnew System::Windows::Forms::Button());
			this->stopbut1 = (gcnew System::Windows::Forms::Button());
			this->startbut1 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown4 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown3 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab2 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->seclab2 = (gcnew System::Windows::Forms::Label());
			this->minlab2 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->hourlab2 = (gcnew System::Windows::Forms::Label());
			this->resetbut2 = (gcnew System::Windows::Forms::Button());
			this->stopbut2 = (gcnew System::Windows::Forms::Button());
			this->startbut2 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown6 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown5 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab3 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->seclab3 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->minlab3 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->hourlab3 = (gcnew System::Windows::Forms::Label());
			this->resetbut3 = (gcnew System::Windows::Forms::Button());
			this->stopbut3 = (gcnew System::Windows::Forms::Button());
			this->startbut3 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown8 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown7 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab4 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->seclab4 = (gcnew System::Windows::Forms::Label());
			this->minlab4 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->hourlab4 = (gcnew System::Windows::Forms::Label());
			this->resetbut4 = (gcnew System::Windows::Forms::Button());
			this->stopbut4 = (gcnew System::Windows::Forms::Button());
			this->startbut4 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown10 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown9 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab5 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->seclab5 = (gcnew System::Windows::Forms::Label());
			this->minlab5 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->hourlab5 = (gcnew System::Windows::Forms::Label());
			this->resetbut5 = (gcnew System::Windows::Forms::Button());
			this->stopbut5 = (gcnew System::Windows::Forms::Button());
			this->startbut5 = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown12 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown11 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab6 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->seclab6 = (gcnew System::Windows::Forms::Label());
			this->minlab6 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->hourlab6 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->resetbut6 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->domainUpDown14 = (gcnew System::Windows::Forms::DomainUpDown());
			this->domainUpDown13 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->cslab7 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->seclab7 = (gcnew System::Windows::Forms::Label());
			this->minlab7 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->hourlab7 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->resetbut7 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer13 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer14 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer15 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->titlebar_pan->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->homepanel->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel14->SuspendLayout();
			this->homepanflow->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// titlebar_pan
			// 
			this->titlebar_pan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->titlebar_pan->Controls->Add(this->pictureBox3);
			this->titlebar_pan->Controls->Add(this->button13);
			this->titlebar_pan->Controls->Add(this->Barcelona);
			this->titlebar_pan->Controls->Add(this->minmize);
			this->titlebar_pan->Controls->Add(this->maxmize);
			this->titlebar_pan->Dock = System::Windows::Forms::DockStyle::Top;
			this->titlebar_pan->Location = System::Drawing::Point(0, 0);
			this->titlebar_pan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->titlebar_pan->Name = L"titlebar_pan";
			this->titlebar_pan->Size = System::Drawing::Size(1102, 74);
			this->titlebar_pan->TabIndex = 2;
			this->titlebar_pan->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::titlebar_pan_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(3, 6);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(117, 62);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->Location = System::Drawing::Point(994, 11);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 48);
			this->button13->TabIndex = 3;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
			// 
			// Barcelona
			// 
			this->Barcelona->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Barcelona->AutoSize = true;
			this->Barcelona->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->Barcelona->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Barcelona->Location = System::Drawing::Point(430, 17);
			this->Barcelona->Name = L"Barcelona";
			this->Barcelona->Size = System::Drawing::Size(122, 30);
			this->Barcelona->TabIndex = 2;
			this->Barcelona->Text = L"Barcelona";
			this->Barcelona->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// minmize
			// 
			this->minmize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->minmize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minmize.BackgroundImage")));
			this->minmize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->minmize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minmize.Image")));
			this->minmize->Location = System::Drawing::Point(832, 11);
			this->minmize->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->minmize->Name = L"minmize";
			this->minmize->Size = System::Drawing::Size(75, 48);
			this->minmize->TabIndex = 0;
			this->minmize->UseVisualStyleBackColor = true;
			this->minmize->Click += gcnew System::EventHandler(this, &MyForm::minmize_Click);
			// 
			// maxmize
			// 
			this->maxmize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->maxmize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maxmize.BackgroundImage")));
			this->maxmize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->maxmize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maxmize.Image")));
			this->maxmize->Location = System::Drawing::Point(913, 11);
			this->maxmize->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->maxmize->Name = L"maxmize";
			this->maxmize->Size = System::Drawing::Size(75, 48);
			this->maxmize->TabIndex = 0;
			this->maxmize->UseVisualStyleBackColor = true;
			this->maxmize->Click += gcnew System::EventHandler(this, &MyForm::maxmize_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->button57);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(899, 74);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(203, 413);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(0, 158);
			this->button57->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(203, 50);
			this->button57->TabIndex = 2;
			this->button57->Text = L"Settings";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 90);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(199, 50);
			this->button6->TabIndex = 1;
			this->button6->Text = L"playstationpanel";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(0, 33);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(203, 44);
			this->button12->TabIndex = 0;
			this->button12->Text = L"homepanel";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button58
			// 
			this->button58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button58.BackgroundImage")));
			this->button58->Location = System::Drawing::Point(328, 14);
			this->button58->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(203, 41);
			this->button58->TabIndex = 4;
			this->button58->Text = L"End shift";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Visible = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// homepanel
			// 
			this->homepanel->Controls->Add(this->flowLayoutPanel2);
			this->homepanel->Controls->Add(this->flowLayoutPanel1);
			this->homepanel->Controls->Add(this->homepanflow);
			this->homepanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homepanel->Location = System::Drawing::Point(0, 74);
			this->homepanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->homepanel->Name = L"homepanel";
			this->homepanel->Size = System::Drawing::Size(899, 413);
			this->homepanel->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->Controls->Add(this->panel13);
			this->flowLayoutPanel2->Controls->Add(this->panel15);
			this->flowLayoutPanel2->Controls->Add(this->panel17);
			this->flowLayoutPanel2->Controls->Add(this->panel21);
			this->flowLayoutPanel2->Controls->Add(this->panel22);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(30);
			this->flowLayoutPanel2->Size = System::Drawing::Size(899, 413);
			this->flowLayoutPanel2->TabIndex = 2;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->button14);
			this->panel13->Controls->Add(this->textBox11);
			this->panel13->Controls->Add(this->label28);
			this->panel13->Location = System::Drawing::Point(33, 32);
			this->panel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(707, 85);
			this->panel13->TabIndex = 1;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(328, 23);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(202, 31);
			this->button14->TabIndex = 4;
			this->button14->Text = L"open";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(157, 30);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(133, 24);
			this->textBox11->TabIndex = 3;
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(19, 25);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(109, 30);
			this->label28->TabIndex = 2;
			this->label28->Text = L"products";
			this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->button19);
			this->panel15->Controls->Add(this->textBox12);
			this->panel15->Controls->Add(this->label32);
			this->panel15->Location = System::Drawing::Point(33, 121);
			this->panel15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(707, 85);
			this->panel15->TabIndex = 2;
			this->panel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel15_Paint);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(328, 27);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(202, 38);
			this->button19->TabIndex = 4;
			this->button19->Text = L"open";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(160, 27);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(131, 24);
			this->textBox12->TabIndex = 3;
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label32->Location = System::Drawing::Point(19, 25);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(132, 30);
			this->label32->TabIndex = 2;
			this->label32->Text = L"output fille";
			this->label32->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->textBox10);
			this->panel17->Controls->Add(this->button58);
			this->panel17->Controls->Add(this->label53);
			this->panel17->Location = System::Drawing::Point(33, 210);
			this->panel17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(707, 85);
			this->panel17->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(160, 28);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(131, 24);
			this->textBox10->TabIndex = 5;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label53
			// 
			this->label53->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label53->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label53->Location = System::Drawing::Point(19, 26);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(127, 30);
			this->label53->TabIndex = 2;
			this->label53->Text = L"Close shift";
			this->label53->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->button39);
			this->panel21->Controls->Add(this->textBox15);
			this->panel21->Controls->Add(this->button28);
			this->panel21->Controls->Add(this->label54);
			this->panel21->Location = System::Drawing::Point(33, 299);
			this->panel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(707, 85);
			this->panel21->TabIndex = 5;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(542, 15);
			this->button39->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(126, 39);
			this->button39->TabIndex = 6;
			this->button39->Text = L"open months data";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click_2);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(160, 27);
			this->textBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(131, 24);
			this->textBox15->TabIndex = 5;
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->Location = System::Drawing::Point(328, 14);
			this->button28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(203, 41);
			this->button28->TabIndex = 4;
			this->button28->Text = L"End month";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click_1);
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label54->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label54->Location = System::Drawing::Point(19, 25);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(149, 30);
			this->label54->TabIndex = 2;
			this->label54->Text = L"Close Month";
			this->label54->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->PortName);
			this->panel22->Controls->Add(this->label51);
			this->panel22->Location = System::Drawing::Point(33, 388);
			this->panel22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(707, 85);
			this->panel22->TabIndex = 6;
			// 
			// PortName
			// 
			this->PortName->Enabled = false;
			this->PortName->Location = System::Drawing::Point(157, 30);
			this->PortName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PortName->Name = L"PortName";
			this->PortName->Size = System::Drawing::Size(133, 24);
			this->PortName->TabIndex = 3;
			this->PortName->Text = L"COM3";
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label51->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label51->Location = System::Drawing::Point(19, 25);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(122, 30);
			this->label51->TabIndex = 2;
			this->label51->Text = L"PortName";
			this->label51->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel8);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(30);
			this->flowLayoutPanel1->Size = System::Drawing::Size(899, 413);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(33, 32);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(707, 85);
			this->panel3->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(184, 30);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 24);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"10";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(19, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 30);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Single_Cost";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(33, 121);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(707, 85);
			this->panel4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(184, 30);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 24);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"15";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(19, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 30);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Multi_Cost";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(33, 210);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(707, 85);
			this->panel6->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(184, 30);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 24);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"20";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(19, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 30);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Priv_Single";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->textBox5);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Location = System::Drawing::Point(33, 299);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(707, 85);
			this->panel8->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(184, 30);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 24);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"25";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(19, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(134, 30);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Prive_Multi";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->textBox16);
			this->panel14->Controls->Add(this->button5);
			this->panel14->Location = System::Drawing::Point(33, 388);
			this->panel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(707, 85);
			this->panel14->TabIndex = 4;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(147, 9);
			this->textBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 24);
			this->textBox16->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(261, 0);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 43);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// homepanflow
			// 
			this->homepanflow->AutoScroll = true;
			this->homepanflow->Controls->Add(this->panel2);
			this->homepanflow->Controls->Add(this->panel5);
			this->homepanflow->Controls->Add(this->panel7);
			this->homepanflow->Controls->Add(this->panel9);
			this->homepanflow->Controls->Add(this->panel10);
			this->homepanflow->Controls->Add(this->panel19);
			this->homepanflow->Controls->Add(this->panel20);
			this->homepanflow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homepanflow->Location = System::Drawing::Point(0, 0);
			this->homepanflow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->homepanflow->Name = L"homepanflow";
			this->homepanflow->Size = System::Drawing::Size(899, 413);
			this->homepanflow->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Controls->Add(this->domainUpDown2);
			this->panel2->Controls->Add(this->domainUpDown1);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->cslab1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->seclab1);
			this->panel2->Controls->Add(this->minlab1);
			this->panel2->Controls->Add(this->label56);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->hourlab1);
			this->panel2->Controls->Add(this->resetbut1);
			this->panel2->Controls->Add(this->stopbut1);
			this->panel2->Controls->Add(this->startbut1);
			this->panel2->Location = System::Drawing::Point(3, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(430, 226);
			this->panel2->TabIndex = 0;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"0");
			this->domainUpDown2->Items->Add(L"15");
			this->domainUpDown2->Items->Add(L"30");
			this->domainUpDown2->Items->Add(L"45");
			this->domainUpDown2->Location = System::Drawing::Point(356, 181);
			this->domainUpDown2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->ReadOnly = true;
			this->domainUpDown2->Size = System::Drawing::Size(41, 24);
			this->domainUpDown2->Sorted = true;
			this->domainUpDown2->TabIndex = 14;
			this->domainUpDown2->Text = L"0";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"0");
			this->domainUpDown1->Items->Add(L"1");
			this->domainUpDown1->Items->Add(L"2");
			this->domainUpDown1->Items->Add(L"3");
			this->domainUpDown1->Items->Add(L"4");
			this->domainUpDown1->Items->Add(L"5");
			this->domainUpDown1->Items->Add(L"6");
			this->domainUpDown1->Items->Add(L"7");
			this->domainUpDown1->Items->Add(L"8");
			this->domainUpDown1->Location = System::Drawing::Point(292, 181);
			this->domainUpDown1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(35, 24);
			this->domainUpDown1->TabIndex = 14;
			this->domainUpDown1->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(183, 21);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 21);
			this->label26->TabIndex = 13;
			this->label26->Text = L"0:00";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(237, 118);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 24);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(169, 121);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(62, 21);
			this->radioButton6->TabIndex = 11;
			this->radioButton6->Text = L"other";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(169, 154);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(81, 21);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->Text = L"privmulti";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(35, 154);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(89, 21);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"privSIngle";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(101, 121);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 21);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->Text = L"multi";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(35, 121);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 21);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->Text = L"single";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(35, 185);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"calc";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(300, 18);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(93, 84);
			this->listBox1->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(174, 182);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"S<->M";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(122, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label5->Location = System::Drawing::Point(131, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label4->Location = System::Drawing::Point(29, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"PS5";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(344, 144);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 144);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(297, 113);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// cslab1
			// 
			this->cslab1->AutoSize = true;
			this->cslab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab1->Location = System::Drawing::Point(196, 50);
			this->cslab1->Name = L"cslab1";
			this->cslab1->Size = System::Drawing::Size(20, 23);
			this->cslab1->TabIndex = 1;
			this->cslab1->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label3->Location = System::Drawing::Point(175, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L".";
			// 
			// seclab1
			// 
			this->seclab1->AutoSize = true;
			this->seclab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab1->Location = System::Drawing::Point(152, 50);
			this->seclab1->Name = L"seclab1";
			this->seclab1->Size = System::Drawing::Size(20, 23);
			this->seclab1->TabIndex = 1;
			this->seclab1->Text = L"0";
			// 
			// minlab1
			// 
			this->minlab1->AutoSize = true;
			this->minlab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab1->Location = System::Drawing::Point(105, 50);
			this->minlab1->Name = L"minlab1";
			this->minlab1->Size = System::Drawing::Size(30, 23);
			this->minlab1->TabIndex = 1;
			this->minlab1->Text = L"00";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label56->Location = System::Drawing::Point(334, 180);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(17, 23);
			this->label56->TabIndex = 1;
			this->label56->Text = L":";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label14->Location = System::Drawing::Point(135, 50);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 23);
			this->label14->TabIndex = 1;
			this->label14->Text = L":";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label1->Location = System::Drawing::Point(85, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L":";
			// 
			// hourlab1
			// 
			this->hourlab1->AutoSize = true;
			this->hourlab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab1->Location = System::Drawing::Point(59, 50);
			this->hourlab1->Name = L"hourlab1";
			this->hourlab1->Size = System::Drawing::Size(20, 23);
			this->hourlab1->TabIndex = 1;
			this->hourlab1->Text = L"0";
			// 
			// resetbut1
			// 
			this->resetbut1->Location = System::Drawing::Point(180, 87);
			this->resetbut1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut1->Name = L"resetbut1";
			this->resetbut1->Size = System::Drawing::Size(62, 23);
			this->resetbut1->TabIndex = 0;
			this->resetbut1->Text = L"reset";
			this->resetbut1->UseVisualStyleBackColor = true;
			this->resetbut1->Visible = false;
			this->resetbut1->Click += gcnew System::EventHandler(this, &MyForm::resetbut1_Click);
			// 
			// stopbut1
			// 
			this->stopbut1->Enabled = false;
			this->stopbut1->Location = System::Drawing::Point(107, 87);
			this->stopbut1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stopbut1->Name = L"stopbut1";
			this->stopbut1->Size = System::Drawing::Size(62, 23);
			this->stopbut1->TabIndex = 0;
			this->stopbut1->Text = L"stop";
			this->stopbut1->UseVisualStyleBackColor = true;
			this->stopbut1->Click += gcnew System::EventHandler(this, &MyForm::stopbut1_Click);
			// 
			// startbut1
			// 
			this->startbut1->Location = System::Drawing::Point(33, 87);
			this->startbut1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startbut1->Name = L"startbut1";
			this->startbut1->Size = System::Drawing::Size(62, 23);
			this->startbut1->TabIndex = 0;
			this->startbut1->Text = L"start";
			this->startbut1->UseVisualStyleBackColor = true;
			this->startbut1->Click += gcnew System::EventHandler(this, &MyForm::startbut1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Controls->Add(this->domainUpDown4);
			this->panel5->Controls->Add(this->domainUpDown3);
			this->panel5->Controls->Add(this->label34);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->radioButton3);
			this->panel5->Controls->Add(this->radioButton7);
			this->panel5->Controls->Add(this->radioButton8);
			this->panel5->Controls->Add(this->radioButton9);
			this->panel5->Controls->Add(this->radioButton10);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->listBox2);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->comboBox4);
			this->panel5->Controls->Add(this->cslab2);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->seclab2);
			this->panel5->Controls->Add(this->minlab2);
			this->panel5->Controls->Add(this->label62);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->hourlab2);
			this->panel5->Controls->Add(this->resetbut2);
			this->panel5->Controls->Add(this->stopbut2);
			this->panel5->Controls->Add(this->startbut2);
			this->panel5->Location = System::Drawing::Point(439, 2);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(430, 226);
			this->panel5->TabIndex = 1;
			// 
			// domainUpDown4
			// 
			this->domainUpDown4->Items->Add(L"0");
			this->domainUpDown4->Items->Add(L"15");
			this->domainUpDown4->Items->Add(L"30");
			this->domainUpDown4->Items->Add(L"45");
			this->domainUpDown4->Location = System::Drawing::Point(358, 182);
			this->domainUpDown4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown4->Name = L"domainUpDown4";
			this->domainUpDown4->ReadOnly = true;
			this->domainUpDown4->Size = System::Drawing::Size(41, 24);
			this->domainUpDown4->Sorted = true;
			this->domainUpDown4->TabIndex = 14;
			this->domainUpDown4->Text = L"0";
			// 
			// domainUpDown3
			// 
			this->domainUpDown3->Items->Add(L"0");
			this->domainUpDown3->Items->Add(L"1");
			this->domainUpDown3->Items->Add(L"2");
			this->domainUpDown3->Items->Add(L"3");
			this->domainUpDown3->Items->Add(L"4");
			this->domainUpDown3->Items->Add(L"5");
			this->domainUpDown3->Items->Add(L"6");
			this->domainUpDown3->Items->Add(L"7");
			this->domainUpDown3->Items->Add(L"8");
			this->domainUpDown3->Location = System::Drawing::Point(294, 182);
			this->domainUpDown3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown3->Name = L"domainUpDown3";
			this->domainUpDown3->ReadOnly = true;
			this->domainUpDown3->Size = System::Drawing::Size(35, 24);
			this->domainUpDown3->TabIndex = 14;
			this->domainUpDown3->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(203, 20);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(49, 21);
			this->label34->TabIndex = 13;
			this->label34->Text = L"0:00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label16->Location = System::Drawing::Point(142, 50);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 23);
			this->label16->TabIndex = 13;
			this->label16->Text = L":";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(237, 118);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(41, 24);
			this->textBox6->TabIndex = 12;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(169, 121);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(62, 21);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->Text = L"other";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(169, 154);
			this->radioButton7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(81, 21);
			this->radioButton7->TabIndex = 11;
			this->radioButton7->Text = L"privmulti";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(35, 154);
			this->radioButton8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(89, 21);
			this->radioButton8->TabIndex = 11;
			this->radioButton8->Text = L"privSIngle";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(101, 121);
			this->radioButton9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(58, 21);
			this->radioButton9->TabIndex = 11;
			this->radioButton9->Text = L"multi";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Checked = true;
			this->radioButton10->Location = System::Drawing::Point(35, 121);
			this->radioButton10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(62, 21);
			this->radioButton10->TabIndex = 11;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"single";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(35, 185);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"calc";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(300, 18);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(98, 84);
			this->listBox2->TabIndex = 10;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(174, 182);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"S<->M";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(122, 187);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 7;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label12->Location = System::Drawing::Point(131, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 24);
			this->label12->TabIndex = 5;
			this->label12->Text = L"2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label13->Location = System::Drawing::Point(29, 18);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 24);
			this->label13->TabIndex = 5;
			this->label13->Text = L"PS4";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(344, 144);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 23);
			this->button9->TabIndex = 4;
			this->button9->Text = L"remove";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(288, 144);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(48, 23);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Add";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(297, 114);
			this->comboBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(95, 24);
			this->comboBox4->TabIndex = 2;
			// 
			// cslab2
			// 
			this->cslab2->AutoSize = true;
			this->cslab2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab2->Location = System::Drawing::Point(203, 50);
			this->cslab2->Name = L"cslab2";
			this->cslab2->Size = System::Drawing::Size(20, 23);
			this->cslab2->TabIndex = 1;
			this->cslab2->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label15->Location = System::Drawing::Point(189, 50);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 23);
			this->label15->TabIndex = 1;
			this->label15->Text = L".";
			// 
			// seclab2
			// 
			this->seclab2->AutoSize = true;
			this->seclab2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab2->Location = System::Drawing::Point(162, 50);
			this->seclab2->Name = L"seclab2";
			this->seclab2->Size = System::Drawing::Size(20, 23);
			this->seclab2->TabIndex = 1;
			this->seclab2->Text = L"0";
			// 
			// minlab2
			// 
			this->minlab2->AutoSize = true;
			this->minlab2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab2->Location = System::Drawing::Point(111, 50);
			this->minlab2->Name = L"minlab2";
			this->minlab2->Size = System::Drawing::Size(30, 23);
			this->minlab2->TabIndex = 1;
			this->minlab2->Text = L"00";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label62->Location = System::Drawing::Point(336, 181);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(17, 23);
			this->label62->TabIndex = 1;
			this->label62->Text = L":";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label18->Location = System::Drawing::Point(85, 50);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 23);
			this->label18->TabIndex = 1;
			this->label18->Text = L":";
			// 
			// hourlab2
			// 
			this->hourlab2->AutoSize = true;
			this->hourlab2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab2->Location = System::Drawing::Point(59, 50);
			this->hourlab2->Name = L"hourlab2";
			this->hourlab2->Size = System::Drawing::Size(20, 23);
			this->hourlab2->TabIndex = 1;
			this->hourlab2->Text = L"0";
			// 
			// resetbut2
			// 
			this->resetbut2->Location = System::Drawing::Point(180, 87);
			this->resetbut2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut2->Name = L"resetbut2";
			this->resetbut2->Size = System::Drawing::Size(62, 23);
			this->resetbut2->TabIndex = 0;
			this->resetbut2->Text = L"reset";
			this->resetbut2->UseVisualStyleBackColor = true;
			this->resetbut2->Visible = false;
			this->resetbut2->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// stopbut2
			// 
			this->stopbut2->Enabled = false;
			this->stopbut2->Location = System::Drawing::Point(107, 87);
			this->stopbut2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stopbut2->Name = L"stopbut2";
			this->stopbut2->Size = System::Drawing::Size(62, 23);
			this->stopbut2->TabIndex = 0;
			this->stopbut2->Text = L"stop";
			this->stopbut2->UseVisualStyleBackColor = true;
			this->stopbut2->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// startbut2
			// 
			this->startbut2->Location = System::Drawing::Point(33, 87);
			this->startbut2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startbut2->Name = L"startbut2";
			this->startbut2->Size = System::Drawing::Size(62, 23);
			this->startbut2->TabIndex = 0;
			this->startbut2->Text = L"start";
			this->startbut2->UseVisualStyleBackColor = true;
			this->startbut2->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel7->Controls->Add(this->domainUpDown6);
			this->panel7->Controls->Add(this->domainUpDown5);
			this->panel7->Controls->Add(this->label43);
			this->panel7->Controls->Add(this->label35);
			this->panel7->Controls->Add(this->label19);
			this->panel7->Controls->Add(this->textBox7);
			this->panel7->Controls->Add(this->radioButton11);
			this->panel7->Controls->Add(this->radioButton12);
			this->panel7->Controls->Add(this->radioButton13);
			this->panel7->Controls->Add(this->radioButton14);
			this->panel7->Controls->Add(this->radioButton15);
			this->panel7->Controls->Add(this->button15);
			this->panel7->Controls->Add(this->listBox3);
			this->panel7->Controls->Add(this->button16);
			this->panel7->Controls->Add(this->label20);
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Controls->Add(this->button17);
			this->panel7->Controls->Add(this->button18);
			this->panel7->Controls->Add(this->comboBox6);
			this->panel7->Controls->Add(this->cslab3);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->seclab3);
			this->panel7->Controls->Add(this->label64);
			this->panel7->Controls->Add(this->minlab3);
			this->panel7->Controls->Add(this->label27);
			this->panel7->Controls->Add(this->hourlab3);
			this->panel7->Controls->Add(this->resetbut3);
			this->panel7->Controls->Add(this->stopbut3);
			this->panel7->Controls->Add(this->startbut3);
			this->panel7->Location = System::Drawing::Point(3, 232);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(430, 226);
			this->panel7->TabIndex = 2;
			// 
			// domainUpDown6
			// 
			this->domainUpDown6->Items->Add(L"0");
			this->domainUpDown6->Items->Add(L"15");
			this->domainUpDown6->Items->Add(L"30");
			this->domainUpDown6->Items->Add(L"45");
			this->domainUpDown6->Location = System::Drawing::Point(352, 183);
			this->domainUpDown6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown6->Name = L"domainUpDown6";
			this->domainUpDown6->ReadOnly = true;
			this->domainUpDown6->Size = System::Drawing::Size(41, 24);
			this->domainUpDown6->Sorted = true;
			this->domainUpDown6->TabIndex = 14;
			this->domainUpDown6->Text = L"0";
			// 
			// domainUpDown5
			// 
			this->domainUpDown5->Items->Add(L"0");
			this->domainUpDown5->Items->Add(L"1");
			this->domainUpDown5->Items->Add(L"2");
			this->domainUpDown5->Items->Add(L"3");
			this->domainUpDown5->Items->Add(L"4");
			this->domainUpDown5->Items->Add(L"5");
			this->domainUpDown5->Items->Add(L"6");
			this->domainUpDown5->Items->Add(L"7");
			this->domainUpDown5->Items->Add(L"8");
			this->domainUpDown5->Location = System::Drawing::Point(288, 183);
			this->domainUpDown5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown5->Name = L"domainUpDown5";
			this->domainUpDown5->ReadOnly = true;
			this->domainUpDown5->Size = System::Drawing::Size(35, 24);
			this->domainUpDown5->TabIndex = 14;
			this->domainUpDown5->Text = L"0";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(182, 21);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(49, 21);
			this->label43->TabIndex = 13;
			this->label43->Text = L"0:00";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(752, 190);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(50, 17);
			this->label35->TabIndex = 13;
			this->label35->Text = L"label26";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label19->Location = System::Drawing::Point(140, 50);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 23);
			this->label19->TabIndex = 13;
			this->label19->Text = L":";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(237, 118);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(41, 24);
			this->textBox7->TabIndex = 12;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(169, 121);
			this->radioButton11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(62, 21);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->Text = L"other";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(169, 154);
			this->radioButton12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(81, 21);
			this->radioButton12->TabIndex = 11;
			this->radioButton12->Text = L"privmulti";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Checked = true;
			this->radioButton13->Location = System::Drawing::Point(35, 154);
			this->radioButton13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(89, 21);
			this->radioButton13->TabIndex = 11;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"privSIngle";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Enabled = false;
			this->radioButton14->Location = System::Drawing::Point(101, 121);
			this->radioButton14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(58, 21);
			this->radioButton14->TabIndex = 11;
			this->radioButton14->Text = L"multi";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Enabled = false;
			this->radioButton15->Location = System::Drawing::Point(35, 121);
			this->radioButton15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(62, 21);
			this->radioButton15->TabIndex = 11;
			this->radioButton15->Text = L"single";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(35, 185);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 23);
			this->button15->TabIndex = 6;
			this->button15->Text = L"calc";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(300, 18);
			this->listBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(98, 84);
			this->listBox3->TabIndex = 10;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(174, 182);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(62, 23);
			this->button16->TabIndex = 8;
			this->button16->Text = L"S<->M";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(122, 187);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 17);
			this->label20->TabIndex = 7;
			this->label20->Text = L"0";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label21->Location = System::Drawing::Point(131, 18);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 24);
			this->label21->TabIndex = 5;
			this->label21->Text = L"3";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label22->Location = System::Drawing::Point(29, 18);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 24);
			this->label22->TabIndex = 5;
			this->label22->Text = L"PS5";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(344, 144);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(52, 23);
			this->button17->TabIndex = 4;
			this->button17->Text = L"remove";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(288, 144);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(48, 23);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Add";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(297, 114);
			this->comboBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(95, 24);
			this->comboBox6->TabIndex = 2;
			// 
			// cslab3
			// 
			this->cslab3->AutoSize = true;
			this->cslab3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab3->Location = System::Drawing::Point(199, 50);
			this->cslab3->Name = L"cslab3";
			this->cslab3->Size = System::Drawing::Size(20, 23);
			this->cslab3->TabIndex = 1;
			this->cslab3->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label24->Location = System::Drawing::Point(183, 50);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(16, 23);
			this->label24->TabIndex = 1;
			this->label24->Text = L".";
			// 
			// seclab3
			// 
			this->seclab3->AutoSize = true;
			this->seclab3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab3->Location = System::Drawing::Point(161, 50);
			this->seclab3->Name = L"seclab3";
			this->seclab3->Size = System::Drawing::Size(20, 23);
			this->seclab3->TabIndex = 1;
			this->seclab3->Text = L"0";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label64->Location = System::Drawing::Point(330, 182);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(17, 23);
			this->label64->TabIndex = 1;
			this->label64->Text = L":";
			// 
			// minlab3
			// 
			this->minlab3->AutoSize = true;
			this->minlab3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab3->Location = System::Drawing::Point(111, 50);
			this->minlab3->Name = L"minlab3";
			this->minlab3->Size = System::Drawing::Size(30, 23);
			this->minlab3->TabIndex = 1;
			this->minlab3->Text = L"00";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label27->Location = System::Drawing::Point(85, 50);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(17, 23);
			this->label27->TabIndex = 1;
			this->label27->Text = L":";
			// 
			// hourlab3
			// 
			this->hourlab3->AutoSize = true;
			this->hourlab3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab3->Location = System::Drawing::Point(59, 50);
			this->hourlab3->Name = L"hourlab3";
			this->hourlab3->Size = System::Drawing::Size(20, 23);
			this->hourlab3->TabIndex = 1;
			this->hourlab3->Text = L"0";
			// 
			// resetbut3
			// 
			this->resetbut3->Location = System::Drawing::Point(180, 87);
			this->resetbut3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut3->Name = L"resetbut3";
			this->resetbut3->Size = System::Drawing::Size(62, 23);
			this->resetbut3->TabIndex = 0;
			this->resetbut3->Text = L"reset";
			this->resetbut3->UseVisualStyleBackColor = true;
			this->resetbut3->Visible = false;
			this->resetbut3->Click += gcnew System::EventHandler(this, &MyForm::resetbut3_Click);
			// 
			// stopbut3
			// 
			this->stopbut3->Enabled = false;
			this->stopbut3->Location = System::Drawing::Point(107, 87);
			this->stopbut3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stopbut3->Name = L"stopbut3";
			this->stopbut3->Size = System::Drawing::Size(62, 23);
			this->stopbut3->TabIndex = 0;
			this->stopbut3->Text = L"stop";
			this->stopbut3->UseVisualStyleBackColor = true;
			this->stopbut3->Click += gcnew System::EventHandler(this, &MyForm::stopbut3_Click);
			// 
			// startbut3
			// 
			this->startbut3->Location = System::Drawing::Point(33, 87);
			this->startbut3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startbut3->Name = L"startbut3";
			this->startbut3->Size = System::Drawing::Size(62, 23);
			this->startbut3->TabIndex = 0;
			this->startbut3->Text = L"start";
			this->startbut3->UseVisualStyleBackColor = true;
			this->startbut3->Click += gcnew System::EventHandler(this, &MyForm::startbut3_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel9->Controls->Add(this->domainUpDown8);
			this->panel9->Controls->Add(this->domainUpDown7);
			this->panel9->Controls->Add(this->label37);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Controls->Add(this->textBox8);
			this->panel9->Controls->Add(this->radioButton16);
			this->panel9->Controls->Add(this->radioButton17);
			this->panel9->Controls->Add(this->radioButton18);
			this->panel9->Controls->Add(this->radioButton19);
			this->panel9->Controls->Add(this->radioButton20);
			this->panel9->Controls->Add(this->button22);
			this->panel9->Controls->Add(this->listBox4);
			this->panel9->Controls->Add(this->button23);
			this->panel9->Controls->Add(this->label29);
			this->panel9->Controls->Add(this->label30);
			this->panel9->Controls->Add(this->label31);
			this->panel9->Controls->Add(this->button24);
			this->panel9->Controls->Add(this->button25);
			this->panel9->Controls->Add(this->comboBox8);
			this->panel9->Controls->Add(this->cslab4);
			this->panel9->Controls->Add(this->label33);
			this->panel9->Controls->Add(this->seclab4);
			this->panel9->Controls->Add(this->minlab4);
			this->panel9->Controls->Add(this->label36);
			this->panel9->Controls->Add(this->label65);
			this->panel9->Controls->Add(this->hourlab4);
			this->panel9->Controls->Add(this->resetbut4);
			this->panel9->Controls->Add(this->stopbut4);
			this->panel9->Controls->Add(this->startbut4);
			this->panel9->Location = System::Drawing::Point(439, 232);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(430, 226);
			this->panel9->TabIndex = 3;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel9_Paint);
			// 
			// domainUpDown8
			// 
			this->domainUpDown8->Items->Add(L"0");
			this->domainUpDown8->Items->Add(L"15");
			this->domainUpDown8->Items->Add(L"30");
			this->domainUpDown8->Items->Add(L"45");
			this->domainUpDown8->Location = System::Drawing::Point(358, 185);
			this->domainUpDown8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown8->Name = L"domainUpDown8";
			this->domainUpDown8->ReadOnly = true;
			this->domainUpDown8->Size = System::Drawing::Size(41, 24);
			this->domainUpDown8->Sorted = true;
			this->domainUpDown8->TabIndex = 14;
			this->domainUpDown8->Text = L"0";
			// 
			// domainUpDown7
			// 
			this->domainUpDown7->Items->Add(L"0");
			this->domainUpDown7->Items->Add(L"1");
			this->domainUpDown7->Items->Add(L"2");
			this->domainUpDown7->Items->Add(L"3");
			this->domainUpDown7->Items->Add(L"4");
			this->domainUpDown7->Items->Add(L"5");
			this->domainUpDown7->Items->Add(L"6");
			this->domainUpDown7->Items->Add(L"7");
			this->domainUpDown7->Items->Add(L"8");
			this->domainUpDown7->Location = System::Drawing::Point(294, 185);
			this->domainUpDown7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown7->Name = L"domainUpDown7";
			this->domainUpDown7->ReadOnly = true;
			this->domainUpDown7->Size = System::Drawing::Size(35, 24);
			this->domainUpDown7->TabIndex = 14;
			this->domainUpDown7->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(182, 18);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(49, 21);
			this->label37->TabIndex = 13;
			this->label37->Text = L"0:00";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label23->Location = System::Drawing::Point(143, 47);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(17, 23);
			this->label23->TabIndex = 13;
			this->label23->Text = L":";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(237, 118);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(41, 24);
			this->textBox8->TabIndex = 12;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(169, 121);
			this->radioButton16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(62, 21);
			this->radioButton16->TabIndex = 11;
			this->radioButton16->Text = L"other";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(169, 154);
			this->radioButton17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(81, 21);
			this->radioButton17->TabIndex = 11;
			this->radioButton17->Text = L"privmulti";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(35, 154);
			this->radioButton18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(89, 21);
			this->radioButton18->TabIndex = 11;
			this->radioButton18->Text = L"privSIngle";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Location = System::Drawing::Point(101, 121);
			this->radioButton19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(58, 21);
			this->radioButton19->TabIndex = 11;
			this->radioButton19->Text = L"multi";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Checked = true;
			this->radioButton20->Location = System::Drawing::Point(35, 121);
			this->radioButton20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(62, 21);
			this->radioButton20->TabIndex = 11;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"single";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(35, 185);
			this->button22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(62, 23);
			this->button22->TabIndex = 6;
			this->button22->Text = L"calc";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(300, 18);
			this->listBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(98, 84);
			this->listBox4->TabIndex = 10;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(174, 182);
			this->button23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(62, 23);
			this->button23->TabIndex = 8;
			this->button23->Text = L"S<->M";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(122, 187);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(16, 17);
			this->label29->TabIndex = 7;
			this->label29->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label30->Location = System::Drawing::Point(131, 18);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(21, 24);
			this->label30->TabIndex = 5;
			this->label30->Text = L"4";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label31->Location = System::Drawing::Point(29, 18);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(43, 24);
			this->label31->TabIndex = 5;
			this->label31->Text = L"PS4";
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(344, 144);
			this->button24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(52, 23);
			this->button24->TabIndex = 4;
			this->button24->Text = L"remove";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(288, 144);
			this->button25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(48, 23);
			this->button25->TabIndex = 3;
			this->button25->Text = L"Add";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(297, 114);
			this->comboBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(95, 24);
			this->comboBox8->TabIndex = 2;
			// 
			// cslab4
			// 
			this->cslab4->AutoSize = true;
			this->cslab4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab4->Location = System::Drawing::Point(203, 50);
			this->cslab4->Name = L"cslab4";
			this->cslab4->Size = System::Drawing::Size(20, 23);
			this->cslab4->TabIndex = 1;
			this->cslab4->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label33->Location = System::Drawing::Point(189, 50);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(16, 23);
			this->label33->TabIndex = 1;
			this->label33->Text = L".";
			// 
			// seclab4
			// 
			this->seclab4->AutoSize = true;
			this->seclab4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab4->Location = System::Drawing::Point(164, 50);
			this->seclab4->Name = L"seclab4";
			this->seclab4->Size = System::Drawing::Size(20, 23);
			this->seclab4->TabIndex = 1;
			this->seclab4->Text = L"0";
			// 
			// minlab4
			// 
			this->minlab4->AutoSize = true;
			this->minlab4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab4->Location = System::Drawing::Point(111, 50);
			this->minlab4->Name = L"minlab4";
			this->minlab4->Size = System::Drawing::Size(30, 23);
			this->minlab4->TabIndex = 1;
			this->minlab4->Text = L"00";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label36->Location = System::Drawing::Point(85, 50);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(17, 23);
			this->label36->TabIndex = 1;
			this->label36->Text = L":";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label65->Location = System::Drawing::Point(336, 183);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(17, 23);
			this->label65->TabIndex = 1;
			this->label65->Text = L":";
			// 
			// hourlab4
			// 
			this->hourlab4->AutoSize = true;
			this->hourlab4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab4->Location = System::Drawing::Point(59, 50);
			this->hourlab4->Name = L"hourlab4";
			this->hourlab4->Size = System::Drawing::Size(20, 23);
			this->hourlab4->TabIndex = 1;
			this->hourlab4->Text = L"0";
			// 
			// resetbut4
			// 
			this->resetbut4->Location = System::Drawing::Point(180, 87);
			this->resetbut4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut4->Name = L"resetbut4";
			this->resetbut4->Size = System::Drawing::Size(62, 23);
			this->resetbut4->TabIndex = 0;
			this->resetbut4->Text = L"reset";
			this->resetbut4->UseVisualStyleBackColor = true;
			this->resetbut4->Visible = false;
			this->resetbut4->Click += gcnew System::EventHandler(this, &MyForm::resetbut4_Click);
			// 
			// stopbut4
			// 
			this->stopbut4->Enabled = false;
			this->stopbut4->Location = System::Drawing::Point(107, 87);
			this->stopbut4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stopbut4->Name = L"stopbut4";
			this->stopbut4->Size = System::Drawing::Size(62, 23);
			this->stopbut4->TabIndex = 0;
			this->stopbut4->Text = L"stop";
			this->stopbut4->UseVisualStyleBackColor = true;
			this->stopbut4->Click += gcnew System::EventHandler(this, &MyForm::stopbut4_Click);
			// 
			// startbut4
			// 
			this->startbut4->Location = System::Drawing::Point(33, 87);
			this->startbut4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startbut4->Name = L"startbut4";
			this->startbut4->Size = System::Drawing::Size(62, 23);
			this->startbut4->TabIndex = 0;
			this->startbut4->Text = L"start";
			this->startbut4->UseVisualStyleBackColor = true;
			this->startbut4->Click += gcnew System::EventHandler(this, &MyForm::startbut4_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel10->Controls->Add(this->domainUpDown10);
			this->panel10->Controls->Add(this->domainUpDown9);
			this->panel10->Controls->Add(this->label41);
			this->panel10->Controls->Add(this->label25);
			this->panel10->Controls->Add(this->textBox9);
			this->panel10->Controls->Add(this->radioButton21);
			this->panel10->Controls->Add(this->radioButton22);
			this->panel10->Controls->Add(this->radioButton23);
			this->panel10->Controls->Add(this->radioButton24);
			this->panel10->Controls->Add(this->radioButton25);
			this->panel10->Controls->Add(this->button29);
			this->panel10->Controls->Add(this->listBox5);
			this->panel10->Controls->Add(this->button30);
			this->panel10->Controls->Add(this->label38);
			this->panel10->Controls->Add(this->label39);
			this->panel10->Controls->Add(this->label40);
			this->panel10->Controls->Add(this->button31);
			this->panel10->Controls->Add(this->button32);
			this->panel10->Controls->Add(this->comboBox10);
			this->panel10->Controls->Add(this->cslab5);
			this->panel10->Controls->Add(this->label42);
			this->panel10->Controls->Add(this->seclab5);
			this->panel10->Controls->Add(this->minlab5);
			this->panel10->Controls->Add(this->label45);
			this->panel10->Controls->Add(this->label67);
			this->panel10->Controls->Add(this->hourlab5);
			this->panel10->Controls->Add(this->resetbut5);
			this->panel10->Controls->Add(this->stopbut5);
			this->panel10->Controls->Add(this->startbut5);
			this->panel10->Location = System::Drawing::Point(3, 462);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(430, 226);
			this->panel10->TabIndex = 4;
			// 
			// domainUpDown10
			// 
			this->domainUpDown10->Items->Add(L"0");
			this->domainUpDown10->Items->Add(L"15");
			this->domainUpDown10->Items->Add(L"30");
			this->domainUpDown10->Items->Add(L"45");
			this->domainUpDown10->Location = System::Drawing::Point(352, 185);
			this->domainUpDown10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown10->Name = L"domainUpDown10";
			this->domainUpDown10->ReadOnly = true;
			this->domainUpDown10->Size = System::Drawing::Size(41, 24);
			this->domainUpDown10->Sorted = true;
			this->domainUpDown10->TabIndex = 14;
			this->domainUpDown10->Text = L"0";
			// 
			// domainUpDown9
			// 
			this->domainUpDown9->Items->Add(L"0");
			this->domainUpDown9->Items->Add(L"1");
			this->domainUpDown9->Items->Add(L"2");
			this->domainUpDown9->Items->Add(L"3");
			this->domainUpDown9->Items->Add(L"4");
			this->domainUpDown9->Items->Add(L"5");
			this->domainUpDown9->Items->Add(L"6");
			this->domainUpDown9->Items->Add(L"7");
			this->domainUpDown9->Items->Add(L"8");
			this->domainUpDown9->Location = System::Drawing::Point(288, 185);
			this->domainUpDown9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown9->Name = L"domainUpDown9";
			this->domainUpDown9->ReadOnly = true;
			this->domainUpDown9->Size = System::Drawing::Size(35, 24);
			this->domainUpDown9->TabIndex = 14;
			this->domainUpDown9->Text = L"0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(176, 21);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(49, 21);
			this->label41->TabIndex = 13;
			this->label41->Text = L"0:00";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label25->Location = System::Drawing::Point(141, 50);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(17, 23);
			this->label25->TabIndex = 13;
			this->label25->Text = L":";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(237, 118);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(41, 24);
			this->textBox9->TabIndex = 12;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(169, 121);
			this->radioButton21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(62, 21);
			this->radioButton21->TabIndex = 11;
			this->radioButton21->Text = L"other";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(169, 154);
			this->radioButton22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(81, 21);
			this->radioButton22->TabIndex = 11;
			this->radioButton22->Text = L"privmulti";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Location = System::Drawing::Point(35, 154);
			this->radioButton23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(89, 21);
			this->radioButton23->TabIndex = 11;
			this->radioButton23->Text = L"privSIngle";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(101, 121);
			this->radioButton24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(58, 21);
			this->radioButton24->TabIndex = 11;
			this->radioButton24->Text = L"multi";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Checked = true;
			this->radioButton25->Location = System::Drawing::Point(35, 121);
			this->radioButton25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(62, 21);
			this->radioButton25->TabIndex = 11;
			this->radioButton25->TabStop = true;
			this->radioButton25->Text = L"single";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(35, 185);
			this->button29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(62, 23);
			this->button29->TabIndex = 6;
			this->button29->Text = L"calc";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(300, 18);
			this->listBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(98, 84);
			this->listBox5->TabIndex = 10;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(174, 182);
			this->button30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(62, 23);
			this->button30->TabIndex = 8;
			this->button30->Text = L"S<->M";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(122, 187);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(16, 17);
			this->label38->TabIndex = 7;
			this->label38->Text = L"0";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label39->Location = System::Drawing::Point(131, 18);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(21, 24);
			this->label39->TabIndex = 5;
			this->label39->Text = L"5";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label40->Location = System::Drawing::Point(29, 18);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(43, 24);
			this->label40->TabIndex = 5;
			this->label40->Text = L"PS4";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(344, 144);
			this->button31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(52, 23);
			this->button31->TabIndex = 4;
			this->button31->Text = L"remove";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(288, 144);
			this->button32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(48, 23);
			this->button32->TabIndex = 3;
			this->button32->Text = L"Add";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(297, 114);
			this->comboBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(95, 24);
			this->comboBox10->TabIndex = 2;
			// 
			// cslab5
			// 
			this->cslab5->AutoSize = true;
			this->cslab5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab5->Location = System::Drawing::Point(196, 50);
			this->cslab5->Name = L"cslab5";
			this->cslab5->Size = System::Drawing::Size(20, 23);
			this->cslab5->TabIndex = 1;
			this->cslab5->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label42->Location = System::Drawing::Point(182, 50);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(16, 23);
			this->label42->TabIndex = 1;
			this->label42->Text = L".";
			// 
			// seclab5
			// 
			this->seclab5->AutoSize = true;
			this->seclab5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab5->Location = System::Drawing::Point(161, 50);
			this->seclab5->Name = L"seclab5";
			this->seclab5->Size = System::Drawing::Size(20, 23);
			this->seclab5->TabIndex = 1;
			this->seclab5->Text = L"0";
			// 
			// minlab5
			// 
			this->minlab5->AutoSize = true;
			this->minlab5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab5->Location = System::Drawing::Point(111, 50);
			this->minlab5->Name = L"minlab5";
			this->minlab5->Size = System::Drawing::Size(30, 23);
			this->minlab5->TabIndex = 1;
			this->minlab5->Text = L"00";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label45->Location = System::Drawing::Point(85, 50);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(17, 23);
			this->label45->TabIndex = 1;
			this->label45->Text = L":";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label67->Location = System::Drawing::Point(330, 183);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(17, 23);
			this->label67->TabIndex = 1;
			this->label67->Text = L":";
			// 
			// hourlab5
			// 
			this->hourlab5->AutoSize = true;
			this->hourlab5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab5->Location = System::Drawing::Point(59, 50);
			this->hourlab5->Name = L"hourlab5";
			this->hourlab5->Size = System::Drawing::Size(20, 23);
			this->hourlab5->TabIndex = 1;
			this->hourlab5->Text = L"0";
			// 
			// resetbut5
			// 
			this->resetbut5->Location = System::Drawing::Point(180, 87);
			this->resetbut5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut5->Name = L"resetbut5";
			this->resetbut5->Size = System::Drawing::Size(62, 23);
			this->resetbut5->TabIndex = 0;
			this->resetbut5->Text = L"reset";
			this->resetbut5->UseVisualStyleBackColor = true;
			this->resetbut5->Visible = false;
			this->resetbut5->Click += gcnew System::EventHandler(this, &MyForm::resetbut5_Click);
			// 
			// stopbut5
			// 
			this->stopbut5->Enabled = false;
			this->stopbut5->Location = System::Drawing::Point(107, 87);
			this->stopbut5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stopbut5->Name = L"stopbut5";
			this->stopbut5->Size = System::Drawing::Size(62, 23);
			this->stopbut5->TabIndex = 0;
			this->stopbut5->Text = L"stop";
			this->stopbut5->UseVisualStyleBackColor = true;
			this->stopbut5->Click += gcnew System::EventHandler(this, &MyForm::stopbut5_Click);
			// 
			// startbut5
			// 
			this->startbut5->Location = System::Drawing::Point(33, 87);
			this->startbut5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startbut5->Name = L"startbut5";
			this->startbut5->Size = System::Drawing::Size(62, 23);
			this->startbut5->TabIndex = 0;
			this->startbut5->Text = L"start";
			this->startbut5->UseVisualStyleBackColor = true;
			this->startbut5->Click += gcnew System::EventHandler(this, &MyForm::startbut5_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel19->Controls->Add(this->domainUpDown12);
			this->panel19->Controls->Add(this->domainUpDown11);
			this->panel19->Controls->Add(this->label46);
			this->panel19->Controls->Add(this->label47);
			this->panel19->Controls->Add(this->textBox13);
			this->panel19->Controls->Add(this->radioButton26);
			this->panel19->Controls->Add(this->radioButton27);
			this->panel19->Controls->Add(this->radioButton28);
			this->panel19->Controls->Add(this->radioButton29);
			this->panel19->Controls->Add(this->radioButton30);
			this->panel19->Controls->Add(this->button11);
			this->panel19->Controls->Add(this->listBox6);
			this->panel19->Controls->Add(this->button20);
			this->panel19->Controls->Add(this->label48);
			this->panel19->Controls->Add(this->label49);
			this->panel19->Controls->Add(this->label50);
			this->panel19->Controls->Add(this->button26);
			this->panel19->Controls->Add(this->button27);
			this->panel19->Controls->Add(this->comboBox2);
			this->panel19->Controls->Add(this->cslab6);
			this->panel19->Controls->Add(this->label52);
			this->panel19->Controls->Add(this->seclab6);
			this->panel19->Controls->Add(this->minlab6);
			this->panel19->Controls->Add(this->label55);
			this->panel19->Controls->Add(this->hourlab6);
			this->panel19->Controls->Add(this->label68);
			this->panel19->Controls->Add(this->resetbut6);
			this->panel19->Controls->Add(this->button33);
			this->panel19->Controls->Add(this->button34);
			this->panel19->Location = System::Drawing::Point(439, 462);
			this->panel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(430, 226);
			this->panel19->TabIndex = 5;
			// 
			// domainUpDown12
			// 
			this->domainUpDown12->Items->Add(L"0");
			this->domainUpDown12->Items->Add(L"15");
			this->domainUpDown12->Items->Add(L"30");
			this->domainUpDown12->Items->Add(L"45");
			this->domainUpDown12->Location = System::Drawing::Point(358, 181);
			this->domainUpDown12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown12->Name = L"domainUpDown12";
			this->domainUpDown12->ReadOnly = true;
			this->domainUpDown12->Size = System::Drawing::Size(41, 24);
			this->domainUpDown12->Sorted = true;
			this->domainUpDown12->TabIndex = 14;
			this->domainUpDown12->Text = L"0";
			// 
			// domainUpDown11
			// 
			this->domainUpDown11->Items->Add(L"0");
			this->domainUpDown11->Items->Add(L"1");
			this->domainUpDown11->Items->Add(L"2");
			this->domainUpDown11->Items->Add(L"3");
			this->domainUpDown11->Items->Add(L"4");
			this->domainUpDown11->Items->Add(L"5");
			this->domainUpDown11->Items->Add(L"6");
			this->domainUpDown11->Items->Add(L"7");
			this->domainUpDown11->Items->Add(L"8");
			this->domainUpDown11->Location = System::Drawing::Point(294, 181);
			this->domainUpDown11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown11->Name = L"domainUpDown11";
			this->domainUpDown11->ReadOnly = true;
			this->domainUpDown11->Size = System::Drawing::Size(35, 24);
			this->domainUpDown11->TabIndex = 14;
			this->domainUpDown11->Text = L"0";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(176, 21);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(49, 21);
			this->label46->TabIndex = 13;
			this->label46->Text = L"0:00";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label47->Location = System::Drawing::Point(141, 50);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(17, 23);
			this->label47->TabIndex = 13;
			this->label47->Text = L":";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(237, 118);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(41, 24);
			this->textBox13->TabIndex = 12;
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Location = System::Drawing::Point(169, 121);
			this->radioButton26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(62, 21);
			this->radioButton26->TabIndex = 11;
			this->radioButton26->Text = L"other";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(169, 154);
			this->radioButton27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(81, 21);
			this->radioButton27->TabIndex = 11;
			this->radioButton27->Text = L"privmulti";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Location = System::Drawing::Point(35, 154);
			this->radioButton28->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(89, 21);
			this->radioButton28->TabIndex = 11;
			this->radioButton28->Text = L"privSIngle";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->Location = System::Drawing::Point(101, 121);
			this->radioButton29->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(58, 21);
			this->radioButton29->TabIndex = 11;
			this->radioButton29->Text = L"multi";
			this->radioButton29->UseVisualStyleBackColor = true;
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->Checked = true;
			this->radioButton30->Location = System::Drawing::Point(35, 121);
			this->radioButton30->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(62, 21);
			this->radioButton30->TabIndex = 11;
			this->radioButton30->TabStop = true;
			this->radioButton30->Text = L"single";
			this->radioButton30->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(35, 185);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 23);
			this->button11->TabIndex = 6;
			this->button11->Text = L"calc";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(300, 18);
			this->listBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(98, 84);
			this->listBox6->TabIndex = 10;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(174, 182);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 23);
			this->button20->TabIndex = 8;
			this->button20->Text = L"S<->M";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click_1);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(122, 187);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(16, 17);
			this->label48->TabIndex = 7;
			this->label48->Text = L"0";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label49->Location = System::Drawing::Point(131, 18);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(21, 24);
			this->label49->TabIndex = 5;
			this->label49->Text = L"6";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label50->Location = System::Drawing::Point(29, 18);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(43, 24);
			this->label50->TabIndex = 5;
			this->label50->Text = L"PS5";
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(344, 144);
			this->button26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(52, 23);
			this->button26->TabIndex = 4;
			this->button26->Text = L"remove";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(288, 144);
			this->button27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(48, 23);
			this->button27->TabIndex = 3;
			this->button27->Text = L"Add";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(297, 114);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(95, 24);
			this->comboBox2->TabIndex = 2;
			// 
			// cslab6
			// 
			this->cslab6->AutoSize = true;
			this->cslab6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab6->Location = System::Drawing::Point(196, 50);
			this->cslab6->Name = L"cslab6";
			this->cslab6->Size = System::Drawing::Size(20, 23);
			this->cslab6->TabIndex = 1;
			this->cslab6->Text = L"0";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label52->Location = System::Drawing::Point(182, 50);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(16, 23);
			this->label52->TabIndex = 1;
			this->label52->Text = L".";
			// 
			// seclab6
			// 
			this->seclab6->AutoSize = true;
			this->seclab6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab6->Location = System::Drawing::Point(161, 50);
			this->seclab6->Name = L"seclab6";
			this->seclab6->Size = System::Drawing::Size(20, 23);
			this->seclab6->TabIndex = 1;
			this->seclab6->Text = L"0";
			// 
			// minlab6
			// 
			this->minlab6->AutoSize = true;
			this->minlab6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab6->Location = System::Drawing::Point(111, 50);
			this->minlab6->Name = L"minlab6";
			this->minlab6->Size = System::Drawing::Size(30, 23);
			this->minlab6->TabIndex = 1;
			this->minlab6->Text = L"00";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label55->Location = System::Drawing::Point(85, 50);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(17, 23);
			this->label55->TabIndex = 1;
			this->label55->Text = L":";
			// 
			// hourlab6
			// 
			this->hourlab6->AutoSize = true;
			this->hourlab6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab6->Location = System::Drawing::Point(59, 50);
			this->hourlab6->Name = L"hourlab6";
			this->hourlab6->Size = System::Drawing::Size(20, 23);
			this->hourlab6->TabIndex = 1;
			this->hourlab6->Text = L"0";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label68->Location = System::Drawing::Point(336, 180);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(17, 23);
			this->label68->TabIndex = 1;
			this->label68->Text = L":";
			// 
			// resetbut6
			// 
			this->resetbut6->Location = System::Drawing::Point(180, 87);
			this->resetbut6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut6->Name = L"resetbut6";
			this->resetbut6->Size = System::Drawing::Size(62, 23);
			this->resetbut6->TabIndex = 0;
			this->resetbut6->Text = L"reset";
			this->resetbut6->UseVisualStyleBackColor = true;
			this->resetbut6->Visible = false;
			this->resetbut6->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button33
			// 
			this->button33->Enabled = false;
			this->button33->Location = System::Drawing::Point(107, 87);
			this->button33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(62, 23);
			this->button33->TabIndex = 0;
			this->button33->Text = L"stop";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(33, 87);
			this->button34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(62, 23);
			this->button34->TabIndex = 0;
			this->button34->Text = L"start";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel20->Controls->Add(this->domainUpDown14);
			this->panel20->Controls->Add(this->domainUpDown13);
			this->panel20->Controls->Add(this->label57);
			this->panel20->Controls->Add(this->label58);
			this->panel20->Controls->Add(this->textBox14);
			this->panel20->Controls->Add(this->radioButton31);
			this->panel20->Controls->Add(this->radioButton32);
			this->panel20->Controls->Add(this->radioButton33);
			this->panel20->Controls->Add(this->radioButton34);
			this->panel20->Controls->Add(this->radioButton35);
			this->panel20->Controls->Add(this->button35);
			this->panel20->Controls->Add(this->listBox7);
			this->panel20->Controls->Add(this->button36);
			this->panel20->Controls->Add(this->label59);
			this->panel20->Controls->Add(this->label60);
			this->panel20->Controls->Add(this->label61);
			this->panel20->Controls->Add(this->button37);
			this->panel20->Controls->Add(this->button38);
			this->panel20->Controls->Add(this->comboBox3);
			this->panel20->Controls->Add(this->cslab7);
			this->panel20->Controls->Add(this->label63);
			this->panel20->Controls->Add(this->seclab7);
			this->panel20->Controls->Add(this->minlab7);
			this->panel20->Controls->Add(this->label66);
			this->panel20->Controls->Add(this->hourlab7);
			this->panel20->Controls->Add(this->label69);
			this->panel20->Controls->Add(this->resetbut7);
			this->panel20->Controls->Add(this->button40);
			this->panel20->Controls->Add(this->button41);
			this->panel20->Location = System::Drawing::Point(3, 692);
			this->panel20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(430, 226);
			this->panel20->TabIndex = 6;
			// 
			// domainUpDown14
			// 
			this->domainUpDown14->Items->Add(L"0");
			this->domainUpDown14->Items->Add(L"15");
			this->domainUpDown14->Items->Add(L"30");
			this->domainUpDown14->Items->Add(L"45");
			this->domainUpDown14->Location = System::Drawing::Point(358, 182);
			this->domainUpDown14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown14->Name = L"domainUpDown14";
			this->domainUpDown14->ReadOnly = true;
			this->domainUpDown14->Size = System::Drawing::Size(41, 24);
			this->domainUpDown14->Sorted = true;
			this->domainUpDown14->TabIndex = 14;
			this->domainUpDown14->Text = L"0";
			// 
			// domainUpDown13
			// 
			this->domainUpDown13->Items->Add(L"0");
			this->domainUpDown13->Items->Add(L"1");
			this->domainUpDown13->Items->Add(L"2");
			this->domainUpDown13->Items->Add(L"3");
			this->domainUpDown13->Items->Add(L"4");
			this->domainUpDown13->Items->Add(L"5");
			this->domainUpDown13->Items->Add(L"6");
			this->domainUpDown13->Items->Add(L"7");
			this->domainUpDown13->Items->Add(L"8");
			this->domainUpDown13->Location = System::Drawing::Point(294, 182);
			this->domainUpDown13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->domainUpDown13->Name = L"domainUpDown13";
			this->domainUpDown13->ReadOnly = true;
			this->domainUpDown13->Size = System::Drawing::Size(35, 24);
			this->domainUpDown13->TabIndex = 14;
			this->domainUpDown13->Text = L"0";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(176, 21);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(49, 21);
			this->label57->TabIndex = 13;
			this->label57->Text = L"0:00";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label58->Location = System::Drawing::Point(141, 50);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(17, 23);
			this->label58->TabIndex = 13;
			this->label58->Text = L":";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(237, 118);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(41, 24);
			this->textBox14->TabIndex = 12;
			// 
			// radioButton31
			// 
			this->radioButton31->AutoSize = true;
			this->radioButton31->Location = System::Drawing::Point(169, 121);
			this->radioButton31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton31->Name = L"radioButton31";
			this->radioButton31->Size = System::Drawing::Size(62, 21);
			this->radioButton31->TabIndex = 11;
			this->radioButton31->Text = L"other";
			this->radioButton31->UseVisualStyleBackColor = true;
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->Location = System::Drawing::Point(169, 154);
			this->radioButton32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(81, 21);
			this->radioButton32->TabIndex = 11;
			this->radioButton32->Text = L"privmulti";
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->Location = System::Drawing::Point(35, 154);
			this->radioButton33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(89, 21);
			this->radioButton33->TabIndex = 11;
			this->radioButton33->Text = L"privSIngle";
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->Location = System::Drawing::Point(101, 121);
			this->radioButton34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(58, 21);
			this->radioButton34->TabIndex = 11;
			this->radioButton34->Text = L"multi";
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->Checked = true;
			this->radioButton35->Location = System::Drawing::Point(35, 121);
			this->radioButton35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(62, 21);
			this->radioButton35->TabIndex = 11;
			this->radioButton35->TabStop = true;
			this->radioButton35->Text = L"single";
			this->radioButton35->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(35, 185);
			this->button35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(62, 23);
			this->button35->TabIndex = 6;
			this->button35->Text = L"calc";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Location = System::Drawing::Point(300, 18);
			this->listBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(98, 84);
			this->listBox7->TabIndex = 10;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(174, 182);
			this->button36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(62, 23);
			this->button36->TabIndex = 8;
			this->button36->Text = L"S<->M";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(122, 187);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(16, 17);
			this->label59->TabIndex = 7;
			this->label59->Text = L"0";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label60->Location = System::Drawing::Point(131, 18);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(21, 24);
			this->label60->TabIndex = 5;
			this->label60->Text = L"7";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label61->Location = System::Drawing::Point(29, 18);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(43, 24);
			this->label61->TabIndex = 5;
			this->label61->Text = L"PS4";
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(344, 144);
			this->button37->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(52, 23);
			this->button37->TabIndex = 4;
			this->button37->Text = L"remove";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(288, 144);
			this->button38->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(48, 23);
			this->button38->TabIndex = 3;
			this->button38->Text = L"Add";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(297, 114);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(95, 24);
			this->comboBox3->TabIndex = 2;
			// 
			// cslab7
			// 
			this->cslab7->AutoSize = true;
			this->cslab7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->cslab7->Location = System::Drawing::Point(196, 50);
			this->cslab7->Name = L"cslab7";
			this->cslab7->Size = System::Drawing::Size(20, 23);
			this->cslab7->TabIndex = 1;
			this->cslab7->Text = L"0";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label63->Location = System::Drawing::Point(182, 50);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(16, 23);
			this->label63->TabIndex = 1;
			this->label63->Text = L".";
			// 
			// seclab7
			// 
			this->seclab7->AutoSize = true;
			this->seclab7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->seclab7->Location = System::Drawing::Point(161, 50);
			this->seclab7->Name = L"seclab7";
			this->seclab7->Size = System::Drawing::Size(20, 23);
			this->seclab7->TabIndex = 1;
			this->seclab7->Text = L"0";
			// 
			// minlab7
			// 
			this->minlab7->AutoSize = true;
			this->minlab7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->minlab7->Location = System::Drawing::Point(111, 50);
			this->minlab7->Name = L"minlab7";
			this->minlab7->Size = System::Drawing::Size(30, 23);
			this->minlab7->TabIndex = 1;
			this->minlab7->Text = L"00";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label66->Location = System::Drawing::Point(85, 50);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(17, 23);
			this->label66->TabIndex = 1;
			this->label66->Text = L":";
			// 
			// hourlab7
			// 
			this->hourlab7->AutoSize = true;
			this->hourlab7->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->hourlab7->Location = System::Drawing::Point(59, 50);
			this->hourlab7->Name = L"hourlab7";
			this->hourlab7->Size = System::Drawing::Size(20, 23);
			this->hourlab7->TabIndex = 1;
			this->hourlab7->Text = L"0";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label69->Location = System::Drawing::Point(336, 181);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(17, 23);
			this->label69->TabIndex = 1;
			this->label69->Text = L":";
			// 
			// resetbut7
			// 
			this->resetbut7->Location = System::Drawing::Point(180, 87);
			this->resetbut7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resetbut7->Name = L"resetbut7";
			this->resetbut7->Size = System::Drawing::Size(62, 23);
			this->resetbut7->TabIndex = 0;
			this->resetbut7->Text = L"reset";
			this->resetbut7->UseVisualStyleBackColor = true;
			this->resetbut7->Visible = false;
			this->resetbut7->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Enabled = false;
			this->button40->Location = System::Drawing::Point(107, 87);
			this->button40->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(62, 23);
			this->button40->TabIndex = 0;
			this->button40->Text = L"stop";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(33, 87);
			this->button41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(62, 23);
			this->button41->TabIndex = 0;
			this->button41->Text = L"start";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 1000;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Enabled = true;
			this->timer5->Interval = 1000;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel11->Controls->Add(this->label17);
			this->panel11->Controls->Add(this->pictureBox1);
			this->panel11->Location = System::Drawing::Point(-6, 451);
			this->panel11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(885, 79);
			this->panel11->TabIndex = 6;
			this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel11_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label17->Location = System::Drawing::Point(62, 15);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(291, 23);
			this->label17->TabIndex = 8;
			this->label17->Text = L"copyright-Ae-abdelhameed-emad";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(26, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 26);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->Controls->Add(this->panel12);
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 2);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Padding = System::Windows::Forms::Padding(30);
			this->flowLayoutPanel3->Size = System::Drawing::Size(1102, 485);
			this->flowLayoutPanel3->TabIndex = 7;
			this->flowLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel3_Paint);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->button21);
			this->panel12->Controls->Add(this->label2);
			this->panel12->Controls->Add(this->pictureBox2);
			this->panel12->Controls->Add(this->label44);
			this->panel12->Location = System::Drawing::Point(33, 32);
			this->panel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1035, 377);
			this->panel12->TabIndex = 1;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->Location = System::Drawing::Point(411, 188);
			this->button21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(203, 41);
			this->button21->TabIndex = 4;
			this->button21->Text = L"Start";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(450, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Barcelona";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(78, 32);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(302, 288);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label44->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label44->Location = System::Drawing::Point(455, 27);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(115, 30);
			this->label44->TabIndex = 3;
			this->label44->Text = L"Welcome";
			this->label44->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// timer6
			// 
			this->timer6->Enabled = true;
			this->timer6->Interval = 1000;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Enabled = true;
			this->timer7->Interval = 1000;
			this->timer7->Tick += gcnew System::EventHandler(this, &MyForm::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Enabled = true;
			this->timer8->Interval = 300000;
			this->timer8->Tick += gcnew System::EventHandler(this, &MyForm::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Interval = 300000;
			this->timer9->Tick += gcnew System::EventHandler(this, &MyForm::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Interval = 300000;
			this->timer10->Tick += gcnew System::EventHandler(this, &MyForm::timer10_Tick);
			// 
			// timer11
			// 
			this->timer11->Interval = 300000;
			this->timer11->Tick += gcnew System::EventHandler(this, &MyForm::timer11_Tick);
			// 
			// timer12
			// 
			this->timer12->Interval = 300000;
			this->timer12->Tick += gcnew System::EventHandler(this, &MyForm::timer12_Tick);
			// 
			// timer13
			// 
			this->timer13->Interval = 300000;
			this->timer13->Tick += gcnew System::EventHandler(this, &MyForm::timer13_Tick);
			// 
			// timer14
			// 
			this->timer14->Interval = 300000;
			this->timer14->Tick += gcnew System::EventHandler(this, &MyForm::timer14_Tick);
			// 
			// timer15
			// 
			this->timer15->Interval = 300000;
			this->timer15->Tick += gcnew System::EventHandler(this, &MyForm::timer15_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1102, 487);
			this->ControlBox = false;
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->homepanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->titlebar_pan);
			this->Controls->Add(this->flowLayoutPanel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->titlebar_pan->ResumeLayout(false);
			this->titlebar_pan->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->homepanel->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->homepanflow->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void maxmize_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized)
	{
		this->WindowState = FormWindowState::Normal;
	}
	else
		this->WindowState = FormWindowState::Maximized;

}
	   void intialzedata() {
		   ifstream cdata;
		   cdata.open("costdata.txt");
		   int i=0;
		   string s1[4];
		   while (cdata.good() && i<=3)
		   {
			   float x;
			   

			   getline(cdata, s1[i], '\n');
			   if (s1[i] == "")
				   break;
			   else
			   {
				   if (i == 0)
				   {
					 
					   String^ s = gcnew String(s1[i].data());
					   textBox2->Text = s;

				   }
				   if (i == 1)
				   {

					   String^ s = gcnew String(s1[i].data());
					   textBox3->Text = s;

				   }
				   if (i == 2)
				   {

					   String^ s = gcnew String(s1[i].data());
					   textBox4->Text = s;

				   }
				   if (i == 3)
				   {

					   String^ s = gcnew String(s1[i].data());
					   textBox5->Text = s;

				   }

			   }
			
			   i++;
		   }

		   cdata.close();

	   }

	  // float counttimemoney(timer t,float cost) {
		 //  float m;
		 //  if (t.h > 0 || t.m >= 15 && t.m < 45 || t.m >= 45)
		 //  {
			//   //cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			//   m = t.h * cost;
			//   if (t.m >= 15 && t.m < 45)
			//   {
			//	   //cash->Text = String::Format("{0,00}", t1[1].h + 5);
			//	   m = m + cost / 2;
			//   }
			//   else if (t.m >= 45)
			//   {
			//	   //cash->Text = String::Format("{0,00}", t1[1].h + 10);
			//	   m = m + 1 * cost;
			//   }
		 //  }
		 //  else {
			//   //cash->Text = String::Format("{0,00}", 0);
			//   m = 0;
		 //  }
		 //  return m;

	  //}
	   float  counttimemoney(timer t, float cost)
	   {
		  int  th1 = t.h;
		   int tm1 = t.m;
		   int m = 0;
		   int  money = th1 * cost + tm1 * (cost / 60.0);
		   if ((money % 10 >= 0) && (money % 10 < 3))
		   {
			   m = money - (money % 10);
		   }
		   else if ((money % 10 >= 3) && (money % 10 < 5))
		   {
			   m = money - (money % 10) + 5;
		   }
		   else if ((money % 10 >= 5) && (money % 10 < 8))
		   {
			   m = money - (money % 10) + 5;
		   }
		   else if ((money % 10 >= 8))
		   {
			   m = money - (money % 10) + 10;

		   }
		   //cost = money;
		   return m;

	   }
	   void ouputfille(menulist* products, float tm , string type,int &prodcount ,timer t,string num)
	   {
		   ofstream shiftfile;
		   shiftfile.open("shift.txt");
		   shiftfile << totalmoneypershift;
		   shiftfile.close();
		   time_t _tt;
		   struct tm _ti;
		   time(&_tt);
		   _tt = time(NULL);
		   _ti = *localtime(&_tt);
		   //cout << _ti.tm_mon + 1 << _ti.tm_mday << " " << _ti.tm_year + 1900;
		   string s = to_string(_ti.tm_mon+1);
		   string s2;
		   s2 = s + ".csv";
		   //s2 = "outputfille_month" + s + ".csv";
		 //  f2.open(s2, ios::app);
		   ofstream  f2,f3;
		   f2.open("outputfille.csv", ios::app);
		   f3.open("monthsmoney.txt", ios::app);
		   f3 << tm << endl;
		   f3.close();
		   f2 << _ti.tm_mday<<"/"<<_ti.tm_mon+1<<"/" <<_ti.tm_year+1900<<","<<_ti.tm_hour<<":"<<_ti.tm_min << "," <<num<<"," << t.h << ":" << t.m << ",";
		/*   if (radioButton1->Checked)
			   f2 << " single" << ",";
		   else if (radioButton2->Checked)
			   f2 << " multiple" << ",";
		   else if (radioButton4->Checked)
			   f2 << "t privet single" << ",";
		   else if (radioButton5->Checked)
			   f2 << " privet multiple" << ",";
		   else if (radioButton6->Checked)
			   f2 << "other" << ", ";
			   */
		   f2 << type << ",";

		   for (int i = 0; i < prodcount; i++)
		   {
			   f2 << products[i].data << "-";

		   }
		   //prodcount = 0;
		   f2 << "," << tm << endl;
		   f2.close();
		   
	   }
	   void recipt(menulist* products, float tm, string type ,int &prodcount ,timer t,string num,float timecostonly)
	   {
		   time_t _tt;
		   struct tm _ti;
		   time(&_tt);
		   _tt = time(NULL);
		   _ti = *localtime(&_tt);
		   //////////////////////////////////////
		   RprodBought = products;
		   Rtm = &tm;
		   Rtype = &type;
		   Rproductcount = &prodcount;
		   Rt = &t;
		   Rnum = &num;
		   Rtimecostonly = &timecostonly;
		   printDocument1->Print();
		   
		   printPreviewDialog1->Document = printDocument1;
		   printPreviewDialog1->ShowDialog();
		   ///////////////////////////////////
		   ofstream f1;
		   f1.open("bille.txt");
		   f1 << "---Barcelona---" << endl;
		   f1 <<"----" <<_ti.tm_hour << ":" << _ti.tm_min<<"---" << endl;
		   if(num=="6"||num=="7")
			   f1 << "---PS5 num : " << num << "  " << "---" << endl;
		   else
				f1 << "---PS4 num : "<<num<<"  " <<"---" << endl;
		   f1 << "total time palyed " << t.h << ":" << t.m << endl;
		 /*  if (radioButton1->Checked)
			   f1 << "type : single" << endl;
		   else if (radioButton2->Checked)
			   f1 << "type : multiple" << endl;
		   else if (radioButton4->Checked)
			   f1 << "type : privet single" << endl;
		   else if (radioButton5->Checked)
			   f1 << "type : privet multiple" << endl;
		   else if (radioButton6->Checked)
			   f1 << "type : other" << endl;
			   */
		   f1 << "type :" << type<<endl;
		   f1 << "---products----" << endl;
		   for (int i = 0; i < prodcount; i++)
		   {
			   f1 <<" | "<< products[i].cost<<" | " << products[i].data << endl;

		   }
		   f1 << "total money " << tm << "  L.E" << endl << "Comeback";
		   f1.close();
		   prodcount = 0;
		   //system("bille.txt");




		   

	   }
private: System::Void minmize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void titlebar_pan_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[1].active)
	{
		t1[1].cs++;
		if (t1[1].cs >= 1)
		{
			t1[1].s++;
			t1[1].cs = 0;
			if (t1[1].s >= 60)  
			{
				t1[1].m++;
				t1[1].s = 0;
				if (t1[1].m >= 60)
				{
					t1[1].h++;
					t1[1].m = 0;
				}
			}
		}


		
	int th = System::Convert::ToInt16(domainUpDown1->Text);
		int tm = System::Convert::ToInt16(domainUpDown2->Text);
	
		if (th != 0 || tm != 0) {

			if ((th == t1[1].h && t1[1].m == tm&&t1[1].s==1))
			{
				button3->PerformClick();
				
			}
		}
	}
	
	cslab1->Text = String::Format("{0:00}", t1[1].cs);
	seclab1->Text = String::Format("{0:00}", t1[1].s);
	hourlab1->Text = String::Format("{0:00}", t1[1].h);
	minlab1->Text = String::Format("{0:00}", t1[1].m);
	
	}
private: System::Void startbut1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[1].active)
		return;
	t1[1].active = 1;
	label6->Text = "00";
	timer9->Enabled = false;
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label26->Text =  String::Format("{0:00}", t )+":"+ String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("A");
	
}
private: System::Void stopbut1_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[1].active = 0;
}
private: System::Void resetbut1_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[1].active = 0;
	t1[1].h = 0;
	t1[1].s = 0;
	t1[1].m = 0;
	t1[1].cs = 0;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	bool f = 1;
	if (!(comboBox1->Text == ""))
		listBox1->Items->Add(comboBox1->Text);
	/* {
		while (listBox1->Items->Count > 0)
		{
			if (!f)
				break;
			//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
			listBox1->SetSelected(0, true);

			if ((comboBox1->Text == listBox1->SelectedItem))
			{ 

				for (int i = 0; i < xC; i++)
				{
					if (!f)
						break;
					String^ s = gcnew String(m[i].data.data());
					if (s == listBox1->SelectedItem->ToString())
					{
						f = 0;
						//int v=m[i].count++;
						String^ s = String::Format("{0:00}", m[i].count++);
						listBox1->Items->Remove(listBox1->SelectedItem);
						listBox1->Items->Add(comboBox1->Text + s);
						break;

						//			productcost = productcost + m[i].cost;
							//		productbought[i] = m[i].data;
					}
					if (!f)
						break;
					// listBox1->SelectedItem->ToString();
					//char d[10]= System::Convert::ToChar(s);
					//string s;
				}
				if (!f)
					break;

			}
			if (!f)
				break;
		}
	
		//listBox1->Items->Add(comboBox1->Text);
	}
	if(f)
	*/
		
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney=0;
	string type;
	timer9->Enabled = true;
	if (radioButton1->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton2->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton4->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton5->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton6->Checked)
	{
		if (!(textBox1->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox1->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

//	String^ s2;
	//Array^ s5;
	//string s[5];
	//int x= listBox1->Items->Count;
	//label6->Text = String::Format("{0:00}", x);
	//s2=listBox1->GetItemText(s2);
	//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer9->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}
	
		while (listBox1->Items->Count > 0)
		{

			//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
			listBox1->SetSelected(0, true);
			for (int i = 0; i < xC; i++)
			{
				String^ s = gcnew String(m[i].data.data());
				if (s == listBox1->SelectedItem->ToString())
				{
					int im= productboughtcount;
					productcost = productcost + m[i].cost;
					productbought[productboughtcount++].data = m[i].data;
					productbought[im].cost = m[i].cost;
					
				}
				// listBox1->SelectedItem->ToString();
				//char d[10]= System::Convert::ToChar(s);
				//string s;

			}

			listBox1->Items->Remove(listBox1->SelectedItem);

		}

		//listBox1->It6++ems->CopyTo(s5, 0);

		float m = 0;
		//t1[1].h = 2;
		//t1[1].m = 45;

/*		{
			if (t1[1].h > 0 || t1[1].m >= 15 && t1[1].m < 45 || t1[1].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
				m = t1[1].h * timecost;
				if (t1[1].m >= 15 && t1[1].m < 45)
				{
					//cash->Text = String::Format("{0,00}", t1[1].h + 5);
					m = m +   timecost/2 ;
				}
				else if (t1[1].m >= 45)
				{
					//cash->Text = String::Format("{0,00}", t1[1].h + 10);
					m = m + 1 * timecost;
				}
			}
			else {
				//cash->Text = String::Format("{0,00}", 0);
				m = 0;
			}
		}
		*/
		float timecostonly=0;
		m = counttimemoney(t1[1], timecost);
		timecostonly = m;
		label6->Text = String::Format("{0:00}", productcost + m);
		totalmoney = productcost + m;
		
		if (tempt[1].flag)
		{
			totalmoney = totalmoney + tempt[1].M;
			timecostonly = timecostonly + tempt[1].M;
			t1[1].h = t1[1].h + tempt[1].T.h;
			t1[1].m = t1[1].m + tempt[1].T.m;
		}
		totalmoneypershift += totalmoney;
		ouputfille(productbought, totalmoney, type,productboughtcount,t1[1],"1");
		
		if (recit)
		{
			//button4->PerformClick();
			recipt(productbought, totalmoney, type, productboughtcount,t1[1],"1",timecostonly);
		}
		productboughtcount = 0;
		resetbut1->Visible = true;
		resetbut1->PerformClick();
		resetbut1->Visible = false;
		/////////////////////////////connectin out//////////////////////////////
/*	SerialPort port("COM3", 9600);
	port.Open();
	port.Write("a");
	*/
	MessageBox::Show("Warnings close the screen number 1 ", "close before press OK");
	//timer9->Enabled = true;
	tempt[1].flag = false;
	tempt[1].M = 0;
	tempt[1].T.h = 0;
	tempt[1].T.m = 0;

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Remove(listBox1->SelectedItem);
	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	//if (h1 == 0) {
	//	ifstream cdata;
	//	cdata.open("shift.txt");
	//	//int i = 0;
	//	string s1;
	//	//while (cdata.good())
	//	//{
	//		//float x;
	//	getline(cdata, s1, '\n');
	//	if (!(s1 == ""))
	//		totalmoneypershift = stof(s1);
	//	h1++;
	//	button58->Visible = true;
	//}

	////if(flowLayoutPanel1->Visible == true)
	//flowLayoutPanel1->Visible = false;
	//else
	//if (onlyone==0)
	//{
	//	intialzedata();
	//	onlyone++;
	//}
	if (flowLayoutPanel2->Visible==true)
		flowLayoutPanel2->Visible = false;
	if(flowLayoutPanel1->Visible==false)
		flowLayoutPanel1->Visible = true;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	float single_H;
	float multi_H;
	float privsingle_H; 
	float privmuli_H; 
	if (textBox16->Text == "barcelonaps")
	{
		textBox16->Text = "";
		//system("MonthsMoneyWIDL.txt");
		try {
			single_H = System::Convert::ToInt16(textBox2->Text);
			multi_H = System::Convert::ToInt16(textBox3->Text);
			privsingle_H = System::Convert::ToInt16(textBox4->Text);
			privmuli_H = System::Convert::ToInt16(textBox5->Text);
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show("you must enter an integer number in all boxes please try again", "input eror...");
			intialzedata();
			return;
		}
		ofstream  f3;
		f3.open("costdata.txt");
		f3 << single_H << endl;
		f3 << multi_H << endl;
		f3 << privsingle_H << endl;
		f3 << privmuli_H << endl;
		//f3 << textBox2->Text;
		f3.close();
		intialzedata();



	}
	else
		MessageBox::Show("incorect password");
	

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (h1 == 0) {
	//	ifstream cdata;
	//	cdata.open("shift.txt");
	//	//int i = 0;
	//	string s1;
	//	//while (cdata.good())
	//	//{
	//		//float x;
	//	getline(cdata, s1, '\n');
	//	if (!(s1 == ""))
	//		totalmoneypershift = stof(s1);
	//	h1++;
	//	button58->Visible = true;
	//}



	//time_t _tt;
	//struct tm _ti;
	//time(&_tt);
	//_tt = time(NULL);
	//_ti = *localtime(&_tt);
	////cout << _ti.tm_mon + 1 << _ti.tm_mday << " " << _ti.tm_year + 1900;

	//ifstream  f3;
	//if (_ti.tm_mday == 1)
	//{
	//	float totalmoneypermonth;
	//	f3.open("monthsmoney.txt");
	//	int i = 0;
	//	//ifstream menu;
	//	//f3.open("menu.csv");

	//	while (f3.good())
	//	{
	//		int x;
	//		string s;
	//		getline(f3, s, '\n');
	//		if (s == "")
	//			break;
	//		else
	//			totalmoneypermonth += stof(s);
	//		//getline(menu, s, '\n');
	//		//m[i].cost = stof(s);
	//		//cout << m[i].data << ":::" << m[i].cost << endl;
	//		//i++;
	//		//xC = i;

	//	}

	//	f3.close();
	//	ofstream f5;
	//	f5.open("monthsmoney.txt");
	//	f5.close();
	//	f5.open("outputfille.csv", ios::app);
	//	f5 << _ti.tm_mday << "/" << _ti.tm_mon + 1 << "/" << _ti.tm_year + 1900 << "," << "///////////" << "///////" << "///" << ","<<totalmoneypermonth<<endl;
	//	f5.close();

	//}
	//if (laoddataC == 0)
	//{
	//	readdata();

	//	for (int i = 0; i < xC; i++)
	//	{
	//		string s2 = m[i].data;
	//		String^ s = gcnew String(s2.data());
	//		comboBox1->Items->Add(s);
	//		comboBox4->Items->Add(s);
	//		comboBox6->Items->Add(s);
	//		comboBox8->Items->Add(s);
	//		comboBox10->Items->Add(s);
	//	}
	//}
	//laoddataC++;
	if (flowLayoutPanel1->Visible == true)
		flowLayoutPanel1->Visible = false;
	if (flowLayoutPanel2->Visible == true)
		flowLayoutPanel2->Visible = false;

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[2].active)
		return;
	t1[2].active = 1;
	label11->Text = "00";
	timer10->Enabled = false;
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label34->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("B");
	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[2].active = 0;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[2].active = 0;
	t1[2].h = 0;
	t1[2].s = 0;
	t1[2].m = 0;
	t1[2].cs = 0;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[2].active)
	{
		t1[2].cs++;
		if (t1[2].cs >= 1)
		{
			t1[2].s++;
			t1[2].cs = 0;
			if (t1[2].s >= 60)
			{
				t1[2].m++;
				t1[2].s = 0;
				if (t1[2].m >= 60)
				{
					t1[2].h++;
					t1[2].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown3->Text);
		int tm = System::Convert::ToInt16(domainUpDown4->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[2].h && t1[2].m == tm && t1[1].s == 1))
			{
				button7->PerformClick();

			}
		}

	}
	cslab2->Text = String::Format("{0:00}", t1[2].cs);
	seclab2->Text = String::Format("{0:00}", t1[2].s);
	hourlab2->Text = String::Format("{0:00}", t1[2].h);
	minlab2->Text = String::Format("{0:00}", t1[2].m);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[1].flag = true;
	//tempt[1].T.h = 0;

	tempt[1].T.h = t1[1].h+ tempt[1].T.h;
	tempt[1].T.m = t1[1].m + tempt[1].T.m;
	float timecost;
	if (radioButton1->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton2->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton4->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton5->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton6->Checked)
	{
		if (!(textBox1->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox1->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M=counttimemoney(t1[1], timecost);
	tempt[1].M = tempt[1].M + M;
	resetbut1->Visible = true;
	resetbut1->PerformClick();
	resetbut1->Visible = false;
	t1[1].active = 1;
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
	//ShellExecute(NULL, "open", "menu.csv", NULL, NULL, SW_NORMAL);
//	if (h1 == 0){
//		ifstream cdata;
//	cdata.open("shift.txt");
//	//int i = 0;
//	string s1;
//	//while (cdata.good())
//	//{
//		//float x;
//	getline(cdata, s1, '\n');
//	if (!(s1 == ""))
//		totalmoneypershift = stof(s1);
//	h1++;
//	button58->Visible = true;
//}
	flowLayoutPanel2->Visible =true;
	//system("menu.csv");
	//dateTimePicker1->Update();
	
	
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {


	//string g = to_string(totalmoneypershift);
	if (textBox10->Text == "barcelonaps"|| textBox10->Text == "playstation")
	{
		textBox10->Text = "";
	
	
	String^s=String::Format("{0:00}", totalmoneypershift);
	if (MessageBox::Show("Are you shure do you want end the shift /n total money = " +s , "ending shift........... ", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		ofstream  f2,f4;
		f2.open("outputfille.csv", ios::app);
		f2 << "end of shift" << ";" << "//////////" << ":" << "//////////" << ";"<<";"<<"///////////////"<<";"<<"//////////////"<< totalmoneypershift <<endl;
		f4.open("shift.txt");
		f4.close();
		totalmoneypershift = 0;
	}
	}
	else
		MessageBox::Show("incorect password");

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox4->Text == ""))
		listBox2->Items->Add(comboBox4->Text);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Remove(listBox2->SelectedItem);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox6->Text == ""))
		listBox3->Items->Add(comboBox6->Text);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox8->Text == ""))
		listBox4->Items->Add(comboBox8->Text);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox10->Text == ""))
		listBox5->Items->Add(comboBox10->Text);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox3->Items->Remove(listBox3->SelectedItem);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox4->Items->Remove(listBox4->SelectedItem);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox5->Items->Remove(listBox5->SelectedItem);
}
private: System::Void startbut3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[3].active)
		return;

	t1[3].active = 1;
	timer11->Enabled = false;
	label20->Text = "00";
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label43->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("C");
	
}
private: System::Void startbut4_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[4].active = 1;
	timer12->Enabled = false;
	label29->Text = "00";
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label37->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("D");
	
}
private: System::Void startbut5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[5].active)
		return;
	t1[5].active = 1;
	timer13->Enabled = false;
	label38->Text = "00";
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label41->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("E");
	
}
private: System::Void stopbut3_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[3].active = 0;
}
private: System::Void stopbut4_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[4].active = 0;
}
private: System::Void stopbut5_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[5].active = 0;
}
private: System::Void resetbut3_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[3].active = 0;
	t1[3].h = 0;
	t1[3].s = 0;
	t1[3].m = 0;
	t1[3].cs = 0;
}
private: System::Void resetbut4_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[4].active = 0;
	t1[4].h = 0;
	t1[4].s = 0;
	t1[4].m = 0;
	t1[4].cs = 0;
}
private: System::Void resetbut5_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[5].active = 0;
	t1[5].h = 0;
	t1[5].s = 0;
	t1[5].m = 0;
	t1[5].cs = 0;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[3].active)
	{
		t1[3].cs++;
		if (t1[3].cs >= 1)
		{
			t1[3].s++;
			t1[3].cs = 0;
			if (t1[3].s >= 60)
			{
				t1[3].m++;
				t1[3].s = 0;
				if (t1[3].m >= 60)
				{
					t1[3].h++;
					t1[3].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown5->Text);
		int tm = System::Convert::ToInt16(domainUpDown6->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[3].h && t1[3].m == tm && t1[3].s == 1))
			{
				button15->PerformClick();

			}
		}

	}
	cslab3->Text = String::Format("{0:00}", t1[3].cs);
	seclab3->Text = String::Format("{0:00}", t1[3].s);
	hourlab3->Text = String::Format("{0:00}", t1[3].h);
	minlab3->Text = String::Format("{0:00}", t1[3].m);
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[4].active)
	{
		t1[4].cs++;
		if (t1[4].cs >= 1)
		{
			t1[4].s++;
			t1[4].cs = 0;
			if (t1[4].s >= 60)
			{
				t1[4].m++;
				t1[4].s = 0;
				if (t1[4].m >= 60)
				{
					t1[4].h++;
					t1[4].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown7->Text);
		int tm = System::Convert::ToInt16(domainUpDown8->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[4].h && t1[4].m == tm && t1[4].s == 1))
			{
				button22->PerformClick();

			}
		}

	}
	cslab4->Text = String::Format("{0:00}", t1[4].cs);
	seclab4->Text = String::Format("{0:00}", t1[4].s);
	hourlab4->Text = String::Format("{0:00}", t1[4].h);
	minlab4->Text = String::Format("{0:00}", t1[4].m);
}
private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[5].active)
	{
		t1[5].cs++;
		if (t1[5].cs >= 1)
		{
			t1[5].s++;
			t1[5].cs = 0;
			if (t1[5].s >= 60)
			{
				t1[5].m++;
				t1[5].s = 0;
				if (t1[5].m >= 60)
				{
					t1[5].h++;
					t1[5].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown9->Text);
		int tm = System::Convert::ToInt16(domainUpDown10->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[5].h && t1[5].m == tm && t1[5].s == 1))
			{
				button29->PerformClick();

			}
		}
	}
	cslab5->Text = String::Format("{0:00}", t1[5].cs);
	seclab5->Text = String::Format("{0:00}", t1[5].s);
	hourlab5->Text = String::Format("{0:00}", t1[5].h);
	minlab5->Text = String::Format("{0:00}", t1[5].m);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer11->Enabled = true;
	if (radioButton15->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton14->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton13->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton12->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton11->Checked)
	{
		if (!(textBox7->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox7->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer11->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox3->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox1->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox3->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox3->Items->Remove(listBox3->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
	//t1[3].h = 2;
	//t1[3].m = 30;

/*	{
		if (t1[3].h > 0 || t1[3].m >= 15 && t1[3].m < 45 || t1[3].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[3].h * timecost;
			if (t1[3].m >= 15 && t1[3].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[3].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly = 0;
	m = counttimemoney(t1[3], timecost);
	timecostonly = m;
	label20->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[3].flag)
	{
		totalmoney = totalmoney + tempt[1].M;
		timecostonly = timecostonly + tempt[1].M;
		t1[3].h = t1[3].h + tempt[3].T.h;
		t1[3].m = t1[3].m + tempt[3].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount,t1[3],"3");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount,t1[3],"3",timecostonly);
	}
	productboughtcount = 0;
	resetbut3->Visible = true;
	resetbut3->PerformClick();
	resetbut3->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
//	SerialPort port("COM3", 9600);
	//port.Open();
	//port.Write("c");
	MessageBox::Show("Warnings close the screen number 3 ", "close before press OK");
	//timer11->Enabled = true;
	tempt[3].flag = false;
	tempt[3].M = 0;
	tempt[3].T.h = 0;
	tempt[3].T.m = 0;

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer10->Enabled = true;
	if (radioButton10->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton9->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton8->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton7->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton3->Checked)
	{
		if (!(textBox6->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox6->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer10->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox2->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox2->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox2->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox2->Items->Remove(listBox2->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
//	t1[2].h = 2;
//	t1[2].m = 30;

	/*{
		if (t1[2].h > 0 || t1[2].m >= 15 && t1[2].m < 45 || t1[2].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[2].h * timecost;
			if (t1[2].m >= 15 && t1[2].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[2].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly=0;
	m = counttimemoney(t1[2], timecost);
	timecostonly = m;
	label11->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[2].flag)
	{
		totalmoney = totalmoney + tempt[2].M;
		timecostonly = timecostonly + tempt[2].M;
		t1[2].h = t1[2].h + tempt[2].T.h;
		t1[2].m = t1[2].m + tempt[2].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount,t1[2],"2");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount,t1[2],"2",timecostonly);
	}
	productboughtcount = 0;
	resetbut2->Visible = true;
	resetbut2->PerformClick();
	resetbut2->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
	//SerialPort port("COM3", 9600);
	//port.Open();
	MessageBox::Show("Warnings close the screen number 2 ","close before press OK");
	//port.Write("b");
	//timer10->Enabled = true;
	tempt[2].flag = false;
	tempt[2].M = 0;
	tempt[2].T.h = 0;
	tempt[2].T.m = 0;

}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer12->Enabled = true;
	if (radioButton20->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton19->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton18->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton17->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton16->Checked)
	{
		if (!(textBox8->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox8->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer12->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox4->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox4->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox4->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox4->Items->Remove(listBox4->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
	//t1[4].h = 2;
	//t1[4].m = 45;

/*	{
		if (t1[4].h > 0 || t1[4].m >= 15 && t1[4].m < 45 || t1[4].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[4].h * timecost;
			if (t1[4].m >= 15 && t1[4].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[4].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly=0;
	m = counttimemoney(t1[4], timecost);
	timecostonly = m;
	label29->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[4].flag)
	{
		totalmoney = totalmoney + tempt[4].M;
		timecostonly = timecostonly + tempt[4].M;
		t1[4].h = t1[4].h + tempt[4].T.h;
		t1[4].m = t1[4].m + tempt[4].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount,t1[4],"4");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount,t1[4],"4",timecostonly);
	}
	productboughtcount = 0;
	resetbut4->Visible = true;
	resetbut4->PerformClick();
	resetbut4->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
//	SerialPort port("COM3", 9600);
	//port.Open();
	//port.Write("d");
	MessageBox::Show("Warnings close the screen number 4 ", "close before press OK");
	//timer12->Enabled = true;
	tempt[4].flag = false;
	tempt[4].M = 0;
	tempt[4].T.h = 0;
	tempt[4].T.m = 0;

}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer13->Enabled = true;
	if (radioButton25->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton24->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton23->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton22->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton21->Checked)
	{
		if (!(textBox9->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox9->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	
	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer13->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox5->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox5->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox5->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox5->Items->Remove(listBox5->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
//	t1[5].h = 2;
	//t1[5].m = 45;

	/*{
		if (t1[5].h > 0 || t1[5].m >= 15 && t1[5].m < 45 || t1[5].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[5].h * timecost;
			if (t1[5].m >= 15 && t1[5].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[5].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly = 0;
	m = counttimemoney(t1[5], timecost);
	timecostonly = m;
	label38->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[5].flag)
	{
		totalmoney = totalmoney + tempt[5].M;
		timecostonly = timecostonly + tempt[5].M;
		t1[5].h = t1[5].h + tempt[5].T.h;
		t1[5].m = t1[5].m + tempt[5].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount,t1[5],"5");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount,t1[5],"5",timecostonly);
	}
	productboughtcount = 0;
	resetbut5->Visible = true;
	resetbut5->PerformClick();
	resetbut5->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
//	SerialPort port("COM3", 9600);
	//port.Open();
	//port.Write("e");
	MessageBox::Show("Warnings close the screen number 5 ", "close before press OK");
	//timer13->Enabled = true;
	tempt[5].flag = false;
	tempt[5].M = 0;
	tempt[5].T.h = 0;
	tempt[5].T.m = 0;

}
private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if ((t1[1].active || t1[2].active || t1[3].active || t1[4].active || t1[5].active || t1[6].active || t1[7].active))
	{
		MessageBox::Show("you can not close while there are PS working ");
		return;
	}
	if(MessageBox::Show("are you sure you want to close ", "closing....", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{	
		SerialPort port(PortName->Text, 9600);
		port.Open();
		port.Write("a");
		_sleep(1000);
		port.Write("b");
		_sleep(1000);
		port.Write("c");
		_sleep(1000);
		port.Write("d");
		_sleep(1000);
		port.Write("e");
		_sleep(1000);
		port.Write("f");
		_sleep(1000);
		port.Write("g");
		time_t _tt;
		struct tm _ti;
		time(&_tt);
		_tt = time(NULL);
		_ti = *localtime(&_tt);
		ofstream f5;
		f5.open("outputfille.csv", ios::app);
		f5 << "closed at " << ";" << _ti.tm_hour << ":" << _ti.tm_min << "-" << _ti.tm_mday << "/" << _ti.tm_mon + 1 << "/" << _ti.tm_year+1900 << endl;
		f5.close();
		Close();
	}
	
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "barcelonaps")
	{
		textBox11->Text = "";
		system("menu.csv");
	}
	else
		MessageBox::Show("incorect password");
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "barcelonaps")
	{
		textBox12->Text = "";
		system("outputfille.csv");
	}
	else
		MessageBox::Show("incorect password");
}
private: System::Void panel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	//printDocument1_PrintPage(5);
	//printDocument1_PrintPage->
	
	
	try {
		SerialPort port(PortName->Text, 9600);
		port.Open();
		port.Write("k");
	}
	catch(Exception^ex){
		MessageBox::Show("please connect the control system cable to (COM3) and try again", "can not find control system");
//		Close();
	}
	////start program///////
	
	for (int i = 0;i < 8;i++)
	{
		tempt[i].flag = false;
		tempt[i].M = 0;
		tempt[i].T.h = 0;
		tempt[i].T.m = 0;
	}
	if (h1 == 0) {
		ifstream cdata;
		cdata.open("shift.txt");
		//int i = 0;
		string s1;
		//while (cdata.good())
		//{
			//float x;
		getline(cdata, s1, '\n');
		if (!(s1 == ""))
			totalmoneypershift = stof(s1);
		h1++;
		button58->Visible = true;
	}
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	//cout << _ti.tm_mon + 1 << _ti.tm_mday << " " << _ti.tm_year + 1900;

	ifstream  f3;
/*	if (_ti.tm_mday == 1)
	{
		float totalmoneypermonth;
		f3.open("monthsmoney.txt");
		int i = 0;
		//ifstream menu;
		//f3.open("menu.csv");

		while (f3.good())
		{
			int x;
			string s;
			getline(f3, s, '\n');
			if (s == "")
				break;
			else
				totalmoneypermonth += stof(s);
			//getline(menu, s, '\n');
			//m[i].cost = stof(s);
			//cout << m[i].data << ":::" << m[i].cost << endl;
			//i++;
			//xC = i;

		}

		f3.close();
		ofstream f5;
		f5.open("monthsmoney.txt");
		f5.close();
		f5.open("outputfille.csv", ios::app);
		f5 << _ti.tm_mday << "/" << _ti.tm_mon + 1 << "/" << _ti.tm_year + 1900 << "," << "///////////" << "///////" << "///" << "," << totalmoneypermonth << endl;
		f5.close();

	}
	*/
	if (laoddataC == 0)
	{
		try {
			readdata();
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show("check product excel file", "Eror in products file ");
			//Close();
		}
		for (int i = 0; i < xC; i++)
		{
			string s2 = m[i].data;
			String^ s = gcnew String(s2.data());
			comboBox1->Items->Add(s);
			comboBox4->Items->Add(s);
			comboBox6->Items->Add(s);
			comboBox8->Items->Add(s);
			comboBox10->Items->Add(s);
			comboBox2->Items->Add(s);
			comboBox3->Items->Add(s);
		}
	}
	laoddataC++;
	
	if (onlyone == 0)
	{
		intialzedata();
		onlyone++;
	}
	flowLayoutPanel3->Visible = false;

	/*time_t _tt;
	struct tm _ti;
	time(&_tt);
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	*/
	ofstream f5;
	f5.open("outputfille.csv", ios::app);
	f5 << "opened at " << "," << _ti.tm_hour << ":" << _ti.tm_min <<"-"<<_ti.tm_mday<<"/"<<_ti.tm_mon+1<<"/"<<_ti.tm_year+1900<< endl;
	f5.close();
	


}
private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[6].active)
	{
		t1[6].cs++;
		if (t1[6].cs >= 1)
		{
			t1[6].s++;
			t1[6].cs = 0;
			if (t1[6].s >= 60)
			{
				t1[6].m++;
				t1[6].s = 0;
				if (t1[6].m >= 60)
				{
					t1[6].h++;
					t1[6].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown11->Text);
		int tm = System::Convert::ToInt16(domainUpDown12->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[6].h && t1[6].m == tm && t1[6].s == 1))
			{
				button11->PerformClick();

			}
		}

	}
	//cslab6->Text = String::Format("{0:00}", t1[6].cs);
	seclab6->Text = String::Format("{0:00}", t1[6].s);
	hourlab6->Text = String::Format("{0:00}", t1[6].h);
	minlab6->Text = String::Format("{0:00}", t1[6].m);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[6].active)
		return;
	t1[6].active = 1;
	label48->Text = "00";
	timer14->Enabled = false ;
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label46->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("F");
	
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1[7].active)
		return;
	t1[7].active = 1;
	timer15->Enabled = false;
	label59->Text = "00";
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	int t;
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	if (_ti.tm_hour > 12)
		t = _ti.tm_hour - 12;
	else
		t = _ti.tm_hour;
	label57->Text = String::Format("{0:00}", t) + ":" + String::Format("{0:00}", _ti.tm_min);
	/////////////////////////////connectin out//////////////////////////////
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("G");
	
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[6].active = 0;
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[7].active = 0;
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[6].active = 0;
	t1[6].h = 0;
	t1[6].s = 0;
	t1[6].m = 0;
	t1[6].cs = 0;
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	t1[7].active = 0;
	t1[7].h = 0;
	t1[7].s = 0;
	t1[7].m = 0;
	t1[7].cs = 0;
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer14->Enabled = true;
	if (radioButton30->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton29->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton28->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton27->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton26->Checked)
	{
		if (!(textBox13->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox13->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer14->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox6->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox6->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox6->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox6->Items->Remove(listBox6->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
	//	t1[5].h = 2;
		//t1[5].m = 45;

	/*{
		if (t1[6].h > 0 || t1[6].m >= 15 && t1[6].m < 45 || t1[6].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[6].h * timecost;
			if (t1[6].m >= 15 && t1[6].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[6].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly = 0;
	m = counttimemoney(t1[6], timecost);
	timecostonly = m;
	label48->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[6].flag)
	{
		totalmoney = totalmoney + tempt[6].M;
		timecostonly = timecostonly + tempt[60].M;
		t1[6].h = t1[6].h + tempt[6].T.h;
		t1[6].m = t1[6].m + tempt[6].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount, t1[6], "6");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount, t1[6], "6",timecostonly);
	}
	productboughtcount = 0;
	resetbut6->Visible = true;
	resetbut6->PerformClick();
	resetbut6->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
//	SerialPort port("COM3", 9600);
	//port.Open();
	//port.Write("f");
	MessageBox::Show("Warnings close the screen number 6 ", "close before press OK");
	//timer14->Enabled = true;
	tempt[6].flag = false;
	tempt[6].M = 0;
	tempt[6].T.h = 0;
	tempt[6].T.m = 0;

}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	//string productbought[20];
	menulist productbought[24];
	int productboughtcount = 0;
	float productcost;
	float timecost;
	productcost = 0;
	bool recit = 0;
	float totalmoney = 0;
	string type;
	timer15->Enabled = true;
	if (radioButton35->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		type = "single";
	}
	else if (radioButton34->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		type = "multiple";
	}
	else if (radioButton33->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		type = "privsingle";
	}
	else if (radioButton32->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		type = "privmulti";
	}
	else if (radioButton31->Checked)
	{
		if (!(textBox14->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox14->Text);
			type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}

	//	String^ s2;
		//Array^ s5;
		//string s[5];
		//int x= listBox1->Items->Count;
		//label6->Text = String::Format("{0:00}", x);
		//s2=listBox1->GetItemText(s2);
		//for (int i = 0; i < listBox1->Items->Count; i++)
	if (MessageBox::Show("Do you want a reciet", "opertation calc-> ps4 num:1 ", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Cancel) {
		timer15->Enabled = false;
		return;
	}
	else if (MessageBox::Show("do you want a reciet", "lm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		recit = 1;
		//button4->PerformClick();
	}

	while (listBox7->Items->Count > 0)
	{

		//comboBox2->Items->Add(listBox1->GetItemText("اندمي"));
		listBox7->SetSelected(0, true);
		for (int i = 0; i < xC; i++)
		{
			String^ s = gcnew String(m[i].data.data());
			if (s == listBox7->SelectedItem->ToString())
			{
				int im = productboughtcount;
				productcost = productcost + m[i].cost;
				productbought[productboughtcount++].data = m[i].data;
				productbought[im].cost = m[i].cost;
			}
			// listBox1->SelectedItem->ToString();
			//char d[10]= System::Convert::ToChar(s);
			//string s;

		}

		listBox7->Items->Remove(listBox7->SelectedItem);

	}

	//listBox1->Items->CopyTo(s5, 0);

	float m = 0;
	//	t1[5].h = 2;
		//t1[5].m = 45;

	/*{
		if (t1[7].h > 0 || t1[7].m >= 15 && t1[7].m < 45 || t1[7].m >= 45)
		{
			//cash->Text = String::Format("{0,00}", t1[1].h * singlehour);
			m = t1[7].h * timecost;
			if (t1[7].m >= 15 && t1[7].m < 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 5);
				m = m + timecost / 2;
			}
			else if (t1[7].m >= 45)
			{
				//cash->Text = String::Format("{0,00}", t1[1].h + 10);
				m = m + 1 * timecost;
			}
		}
		else {
			//cash->Text = String::Format("{0,00}", 0);
			m = 0;
		}
	}
	*/
	float timecostonly = 0;

	m = counttimemoney(t1[7], timecost);
	timecostonly = m;
	label59->Text = String::Format("{0:00}", productcost + m);
	totalmoney = productcost + m;
	//totalmoneypershift += totalmoney;
	if (tempt[7].flag)
	{
		totalmoney = totalmoney + tempt[7].M;
		timecostonly = timecostonly + tempt[7].M;
		t1[7].h = t1[7].h + tempt[7].T.h;
		t1[7].m = t1[7].m + tempt[7].T.m;
	}
	totalmoneypershift += totalmoney;
	ouputfille(productbought, totalmoney, type, productboughtcount, t1[7], "7");

	if (recit)
	{
		//button4->PerformClick();
		recipt(productbought, totalmoney, type, productboughtcount, t1[7], "7", timecostonly);
	}
	productboughtcount = 0;
	resetbut7->Visible = true;
	resetbut7->PerformClick();
	resetbut7->Visible = false;
	/////////////////////////////connectin out//////////////////////////////
//	SerialPort port("COM3", 9600);
	//port.Open();
	//port.Write("g");
	MessageBox::Show("Warnings close the screen number 7 ", "close before press OK");
	//timer15->Enabled = true;
	tempt[7].flag = false;
	tempt[7].M = 0;
	tempt[7].T.h = 0;
	tempt[7].T.m = 0;

}
private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (t1[7].active)
	{
		t1[7].cs++;
		if (t1[7].cs >= 1)
		{
			t1[7].s++;
			t1[7].cs = 0;
			if (t1[7].s >= 60)
			{
				t1[7].m++;
				t1[7].s = 0;
				if (t1[7].m >= 60)
				{
					t1[7].h++;
					t1[7].m = 0;
				}
			}
		}
		int th = System::Convert::ToInt16(domainUpDown13->Text);
		int tm = System::Convert::ToInt16(domainUpDown14->Text);
		if (th != 0 || tm != 0) {

			if ((th == t1[7].h && t1[7].m == tm && t1[7].s == 1))
			{
				button35->PerformClick();

			}
		}
	}
	cslab7->Text = String::Format("{0:00}", t1[7].cs);
	seclab7->Text = String::Format("{0:00}", t1[7].s);
	hourlab7->Text = String::Format("{0:00}", t1[7].h);
	minlab7->Text = String::Format("{0:00}", t1[7].m);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox2->Text == ""))
		listBox6->Items->Add(comboBox2->Text);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(comboBox3->Text == ""))
		listBox7->Items->Add(comboBox3->Text);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox6->Items->Remove(listBox6->SelectedItem);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox7->Items->Remove(listBox7->SelectedItem);
}
private: System::Void button28_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//string g = to_string(totalmoneypershift);
	if (textBox15->Text == "barcelonaps")
	{
		textBox15->Text = "";

		time_t _tt;
		struct tm _ti;
		time(&_tt);
		_tt = time(NULL);
		_ti = *localtime(&_tt);
		ifstream  f3;
		float totalmoneypermonth;
		f3.open("monthsmoney.txt");
		int i = 0;
		while (f3.good())
		{
			int x;
			string s;
			getline(f3, s, '\n');
			if (s == "")
				break;
			else
				totalmoneypermonth += stof(s);
		}
		f3.close();
		ofstream f5;
		f5.open("monthsmoney.txt");
		f5.close();
		f5.open("MonthsMoneyWIDL.txt", ios::app);
		f5 << _ti.tm_mday << "/" << _ti.tm_mon + 1 << "/" << _ti.tm_year + 1900 << "-----" <<"total money in month  "<< _ti.tm_mon + 1 <<"is  "<< totalmoneypermonth <<" L.E" <<endl;
		f5.close();
		f5.open("outputfille.csv");
		f5.close();
		f5.open("outputfille.csv", ios::app);
		f5 << "Date" << "," << "time" <<","<< "PS_NUM" <<","<< "time played" <<","<< "playing type"<<"," << "Products bought"<<"," << "total money" <<","<< endl;
		f5.close();
	}
	else
		MessageBox::Show("incorect password");
}
private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
	try {
		SerialPort port(PortName->Text, 9600);
		port.Open();
		port.Write("k");
	}
	catch (Exception ^ ex)
	{
		time_t _tt;
		struct tm _ti;
		time(&_tt);
		_tt = time(NULL);
		_ti = *localtime(&_tt);
		ofstream f5;
		f5.open("outputfille.csv",ios::app);
		f5 << "Eror connection  found at " << ";" << _ti.tm_hour << ":" << _ti.tm_min << endl;
		f5.close();

		

	}
}
private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
	//string s1 = "COM3";
	//String^ s = "COM3";
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("a");
	timer9->Enabled = false;
	//MessageBox::Show("1-closed");

}
private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("b");
	timer9->Enabled = false;


}
private: System::Void timer11_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("c");
	timer9->Enabled = false;
}
private: System::Void timer12_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("d");
	timer9->Enabled = false;

}
private: System::Void timer13_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("e");
	timer9->Enabled = false;
}
private: System::Void timer14_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("f");
	timer9->Enabled = false;

}
private: System::Void timer15_Tick(System::Object^ sender, System::EventArgs^ e) {
	SerialPort port(PortName->Text, 9600);
	port.Open();
	port.Write("g");
	timer9->Enabled = false;
}
private: System::Void panel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button39_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ofstream f5;
	f5.open("port.txt");
	//f5.close();
	//f5.open("MonthsMoneyWIDL.txt", ios::app);
	
	//f5 << PortName->Text;
	//f5.close();
	//f5.open("outputfille.csv");
	f5.close();
}
private: System::Void button39_Click_2(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox15->Text == "barcelonaps")
	{
		textBox15->Text = "";
		system("MonthsMoneyWIDL.txt");
	}
	else
		MessageBox::Show("incorect password");
	
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	
	//this->Graphics->DrawString("51", "Arial", "Black", (185, 10));
	time_t _tt;
	struct tm _ti;
	time(&_tt);
	_tt = time(NULL);
	_ti = *localtime(&_tt);
	
	//PrintFont =
	 //this->Font("Arial", 10,"Bold");
//	Font* s = new Font(gcnew);
	System::Drawing::Font^ f= gcnew System::Drawing::Font(L"Arial", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
	//recipt
//	f->Bold;
	/*
	  ofstream f1;
		   f1.open("bille.txt");
		   f1 << "---Barcelona---" << endl;
		   f1 << "---PS4 num : "<<num<<"  " <<"---" << endl;
		   f1 << "total time palyed " << t.h << ":" << t.m << endl;
		 /*  if (radioButton1->Checked)
			   f1 << "type : single" << endl;
		   else if (radioButton2->Checked)
			   f1 << "type : multiple" << endl;
		   else if (radioButton4->Checked)
			   f1 << "type : privet single" << endl;
		   else if (radioButton5->Checked)
			   f1 << "type : privet multiple" << endl;
		   else if (radioButton6->Checked)
			   f1 << "type : other" << endl;
			   */
	/*
	f1 << "type :" << type << endl;
	f1 << "---products----" << endl;
	for (int i = 0; i < prodcount; i++)
	{
		f1 << " | " << products[i].cost << " | " << products[i].data << endl;

	}
	f1 << "total money " << tm << "  L.E" << endl << "Comeback";
	f1.close();
	prodcount = 0;
	system("bille.txt");
	*/
//this->Font(gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	e->Graphics->DrawString(L" -welcome to Barcelona PS-  ", f,Brushes::Black, 10, 10);
	//e->Graphics->DrawString('\n',f, Brushes::Black, 185, 11);

	string m = to_string(_ti.tm_hour);
	String^ s = gcnew String(m.data());
	string m2 = to_string(_ti.tm_min);
	String^ s2 = gcnew String(m2.data());
	//s=to_string(5);
	e->Graphics->DrawString(L"------------"+s+":"+s2+"------------", f, Brushes::Black, 10, 22);
	 m = *Rnum;
	 s = gcnew String(m.data());
	e->Graphics->DrawString(L"---- PS number : "+s+" ----", f, Brushes::Black, 10, 34);
	m = to_string(Rt->h);
	 s = gcnew String(m.data());
	
	string mim =to_string(Rt->m);
	String^ s1 = gcnew String(mim.data());
	e->Graphics->DrawString(L"total time palyed  " + s +" : "+s1, f, Brushes::Black, 10, 46);
	m = to_string(*Rtimecostonly);
	s = gcnew String(m.data());
	 e->Graphics->DrawString(L"time cost only " + s +"L.E", f, Brushes::Black, 10, 58);
	 m = *Rtype;

	 s = gcnew String(m.data());
	e->Graphics->DrawString(L"Type : " + s , f, Brushes::Black, 10, 70);
	e->Graphics->DrawString(L"-------------Products------------- " , f, Brushes::Black, 10, 82);
	int c = 82;
	for (int i = 0; i < *Rproductcount; i++)
	{
		//f1 << " | " << *products[i].cost << " | " << products[i].data << endl;
		c = c + 12;
		m = RprodBought[i].data;
		s = gcnew String(m.data());
		mim = to_string(RprodBought[i].cost);
		s1 = gcnew String(mim.data());
		e->Graphics->DrawString(L"| " + s, f, Brushes::Black, 10, c);
		e->Graphics->DrawString(L"" + s1+" |", f, Brushes::Black, 100, c);


	}
	m = to_string(*Rtm);
	s = gcnew String(m.data());
	e->Graphics->DrawString(L"-------------------------------------", f, Brushes::Black, 10, c + 12);
	e->Graphics->DrawString(L"total money : " + s + "L.E ", f, Brushes::Black, 10, c + 24);

	e->Graphics->DrawString(L"--------- U-R-Welcome --------" , f, Brushes::Black, 10, c + 36);

	//e->Graphics->DrawString(L"_______________________________________________________________________________________________________________", this->Font, Brushes::Black, 0, 10);
	//e->Graphics->DrawString()
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[2].flag = true;
	//tempt[1].T.h = 0;

	tempt[2].T.h = t1[2].h + tempt[2].T.h;
	tempt[2].T.m = t1[2].m + tempt[2].T.m;
	float timecost;
	if (radioButton10->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton9->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton8->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton7->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton3->Checked)
	{
		if (!(textBox6->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox6->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[2], timecost);
	tempt[2].M = tempt[2].M + M;
	resetbut2->Visible = true;
	resetbut2->PerformClick();
	resetbut2->Visible = false;
	t1[2].active = 1;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[3].flag = true;
	//tempt[1].T.h = 0;

	tempt[3].T.h = t1[3].h + tempt[3].T.h;
	tempt[3].T.m = t1[3].m + tempt[3].T.m;
	float timecost;
	if (radioButton15->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton14->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton13->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton12->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton11->Checked)
	{
		if (!(textBox7->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox7->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[3], timecost);
	tempt[3].M = tempt[3].M + M;
	resetbut3->Visible = true;
	resetbut3->PerformClick();
	resetbut3->Visible = false;
	t1[3].active = 1;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[4].flag = true;
	//tempt[1].T.h = 0;

	tempt[4].T.h = t1[4].h + tempt[4].T.h;
	tempt[4].T.m = t1[4].m + tempt[4].T.m;
	float timecost;
	if (radioButton20->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton19->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton18->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton17->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton16->Checked)
	{
		if (!(textBox8->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox8->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[4], timecost);
	tempt[4].M = tempt[4].M + M;
	resetbut4->Visible = true;
	resetbut4->PerformClick();
	resetbut4->Visible = false;
	t1[4].active = 1;
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[5].flag = true;
	//tempt[1].T.h = 0;

	tempt[5].T.h = t1[5].h + tempt[5].T.h;
	tempt[5].T.m = t1[5].m + tempt[5].T.m;
	float timecost;
	if (radioButton25->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton24->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton23->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton22->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton21->Checked)
	{
		if (!(textBox9->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox9->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[5], timecost);
	tempt[5].M = tempt[5].M + M;
	resetbut5->Visible = true;
	resetbut5->PerformClick();
	resetbut5->Visible = false;
	t1[5].active = 1;
}
private: System::Void button20_Click_1(System::Object^ sender, System::EventArgs^ e) {
	tempt[6].flag = true;
	//tempt[1].T.h = 0;

	tempt[6].T.h = t1[6].h + tempt[6].T.h;
	tempt[6].T.m = t1[6].m + tempt[6].T.m;
	float timecost;
	if (radioButton30->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton29->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton28->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton27->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton26->Checked)
	{
		if (!(textBox13->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox13->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[6], timecost);
	tempt[6].M = tempt[6].M + M;
	resetbut6->Visible = true;
	resetbut6->PerformClick();
	resetbut6->Visible = false;
	t1[6].active = 1;
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	tempt[7].flag = true;
	//tempt[1].T.h = 0;

	tempt[7].T.h = t1[7].h + tempt[7].T.h;
	tempt[7].T.m = t1[7].m + tempt[7].T.m;
	float timecost;
	if (radioButton35->Checked)
	{
		timecost = System::Convert::ToInt16(textBox2->Text);
		//type = "single";
	}
	else if (radioButton34->Checked) {
		timecost = System::Convert::ToInt16(textBox3->Text);
		//type = "multiple";
	}
	else if (radioButton33->Checked) {
		timecost = System::Convert::ToInt16(textBox4->Text);
		//type = "privsingle";
	}
	else if (radioButton32->Checked) {
		timecost = System::Convert::ToInt16(textBox5->Text);
		//type = "privmulti";
	}
	else if (radioButton31->Checked)
	{
		if (!(textBox14->Text == ""))
		{
			timecost = System::Convert::ToInt16(textBox14->Text);
			//type = "other";
		}
		else
		{
			MessageBox::Show("you must enter an decimal number");
			return;
		}
	}
	else
	{
		MessageBox::Show("you must choose single or multi,other....");
		return;
	}
	float M = counttimemoney(t1[7], timecost);
	tempt[7].M = tempt[7].M + M;
	resetbut7->Visible = true;
	resetbut7->PerformClick();
	resetbut7->Visible = false;
	t1[7].active = 1;

}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason != CloseReason::UserClosing)
		return;
	if ((t1[1].active || t1[2].active || t1[3].active || t1[4].active || t1[5].active || t1[6].active || t1[7].active))
	{
		MessageBox::Show("you can not close while there are PS working ");
		//return;
		e->Cancel = true;
		return;
	}
	if (MessageBox::Show("are you sure you want to close ", "closing....", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SerialPort port(PortName->Text, 9600);
		port.Open();
		port.Write("a");
		_sleep(1000);
		port.Write("b");
		_sleep(1000);
		port.Write("c");
		_sleep(1000);
		port.Write("d");
		_sleep(1000);
		port.Write("e");
		_sleep(1000);
		port.Write("f");
		_sleep(1000);
		port.Write("g");
		time_t _tt;
		struct tm _ti;
		time(&_tt);
		_tt = time(NULL);
		_ti = *localtime(&_tt);
		ofstream f5;
		f5.open("outputfille.csv", ios::app);
		f5 << "closed at " << "," << _ti.tm_hour << ":" << _ti.tm_min << "-" << _ti.tm_mday << "/" << _ti.tm_mon + 1 << "/" << _ti.tm_year + 1900 << endl;
		f5.close();
		Close();
	}
	
		if (e->CloseReason != CloseReason::UserClosing)
		return;
		e->Cancel = true;
}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	return;
}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
