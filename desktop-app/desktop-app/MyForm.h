#pragma once
#include <string>



namespace desktopapp {

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


		//sensor *sensor1;
		//void initialize_sensor();
		MyForm(void)
		{
			InitializeComponent();
			/*
			record record1 = record(1, "NEU", 7.0);
			record record2 = record(2, "NEU", 7.0);
			record record3 = record(3, "NEU", 7.0);
			record record4 = record(4, "NEU", 7.0);
			record *records = &record1;
			*(records + 1) = record2;
			*(records + 1) = record3;
			*(records + 1) = record4;
			sensor sensor_addr = sensor(1, "NEU", records, 4);
			*sensor1 = sensor_addr;
			*/
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

	private: System::Windows::Forms::Button^  import_button;

	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Windows::Forms::TabControl^  tab;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  Intersection;
	private: System::Windows::Forms::Label^  id_label;
	private: System::Windows::Forms::Label^  location_label;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  total_count;
	private: System::Windows::Forms::Label^  filter_label;
	private: System::Windows::Forms::Label^  average_speed_label;
	private: System::Windows::Forms::Button^  filter_button;
	private: System::Windows::Forms::TextBox^  min_height;
	private: System::Windows::Forms::TextBox^  max_height;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  input_file;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  sensorButton1;
	private: System::Windows::Forms::RadioButton^  sensorButton6;
	private: System::Windows::Forms::RadioButton^  sensorButton8;

	private: System::Windows::Forms::RadioButton^  sensorButton7;
	private: System::Windows::Forms::RadioButton^  sensorButton5;
	private: System::Windows::Forms::RadioButton^  sensorButton2;
	private: System::Windows::Forms::RadioButton^  sensorButton4;
	private: System::Windows::Forms::RadioButton^  sensorButton3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  NSO;
	private: System::Windows::Forms::TextBox^  SNO;
	private: System::Windows::Forms::TextBox^  NSI;
	private: System::Windows::Forms::TextBox^  WEI;
	private: System::Windows::Forms::TextBox^  EWO;
	private: System::Windows::Forms::TextBox^  EWI;
	private: System::Windows::Forms::TextBox^  WEO;
	private: System::Windows::Forms::TextBox^  SNI;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	protected:

	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::Chart^  speed_chart;
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->import_button = (gcnew System::Windows::Forms::Button());
			this->tab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->input_file = (gcnew System::Windows::Forms::TextBox());
			this->Intersection = (gcnew System::Windows::Forms::TabPage());
			this->sensorButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->sensorButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->id_label = (gcnew System::Windows::Forms::Label());
			this->location_label = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->total_count = (gcnew System::Windows::Forms::Label());
			this->filter_label = (gcnew System::Windows::Forms::Label());
			this->average_speed_label = (gcnew System::Windows::Forms::Label());
			this->filter_button = (gcnew System::Windows::Forms::Button());
			this->min_height = (gcnew System::Windows::Forms::TextBox());
			this->max_height = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->NSO = (gcnew System::Windows::Forms::TextBox());
			this->SNO = (gcnew System::Windows::Forms::TextBox());
			this->NSI = (gcnew System::Windows::Forms::TextBox());
			this->WEI = (gcnew System::Windows::Forms::TextBox());
			this->EWO = (gcnew System::Windows::Forms::TextBox());
			this->EWI = (gcnew System::Windows::Forms::TextBox());
			this->WEO = (gcnew System::Windows::Forms::TextBox());
			this->SNI = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			speed_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(speed_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Intersection->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// speed_chart
			// 
			chartArea2->Name = L"ChartArea1";
			speed_chart->ChartAreas->Add(chartArea2);
			speed_chart->DataSource = this->dataSet1;
			legend2->Name = L"Legend1";
			speed_chart->Legends->Add(legend2);
			speed_chart->Location = System::Drawing::Point(167, 63);
			speed_chart->Name = L"speed_chart";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Sensor";
			speed_chart->Series->Add(series2);
			speed_chart->Size = System::Drawing::Size(300, 183);
			speed_chart->TabIndex = 15;
			speed_chart->Text = L"chart1";
			title2->Name = L"Title1";
			title2->Text = L"Speed vs. Time";
			speed_chart->Titles->Add(title2);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"speed_dataset";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->TableName = L"Table1";
			// 
			// import_button
			// 
			this->import_button->AccessibleName = L"";
			this->import_button->BackColor = System::Drawing::SystemColors::Control;
			this->import_button->Location = System::Drawing::Point(208, 289);
			this->import_button->Name = L"import_button";
			this->import_button->Size = System::Drawing::Size(140, 46);
			this->import_button->TabIndex = 1;
			this->import_button->Text = L"Import from File";
			this->import_button->UseVisualStyleBackColor = false;
			this->import_button->Click += gcnew System::EventHandler(this, &MyForm::import_button_Click);
			// 
			// tab
			// 
			this->tab->Controls->Add(this->tabPage1);
			this->tab->Controls->Add(this->Intersection);
			this->tab->Controls->Add(this->tabPage2);
			this->tab->ItemSize = System::Drawing::Size(120, 50);
			this->tab->Location = System::Drawing::Point(12, 12);
			this->tab->Multiline = true;
			this->tab->Name = L"tab";
			this->tab->SelectedIndex = 0;
			this->tab->Size = System::Drawing::Size(578, 603);
			this->tab->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->input_file);
			this->tabPage1->Controls->Add(this->import_button);
			this->tabPage1->Location = System::Drawing::Point(4, 54);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(570, 545);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"   Import Data   ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(101, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(376, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Please Specify the name of Input File Below";
			// 
			// input_file
			// 
			this->input_file->Location = System::Drawing::Point(208, 203);
			this->input_file->Name = L"input_file";
			this->input_file->Size = System::Drawing::Size(151, 20);
			this->input_file->TabIndex = 2;
			this->input_file->Text = L"example.txt";
			this->input_file->TextChanged += gcnew System::EventHandler(this, &MyForm::input_file_TextChanged);
			// 
			// Intersection
			// 
			this->Intersection->Controls->Add(this->sensorButton6);
			this->Intersection->Controls->Add(this->sensorButton8);
			this->Intersection->Controls->Add(this->sensorButton7);
			this->Intersection->Controls->Add(this->sensorButton5);
			this->Intersection->Controls->Add(this->sensorButton2);
			this->Intersection->Controls->Add(this->sensorButton4);
			this->Intersection->Controls->Add(this->sensorButton3);
			this->Intersection->Controls->Add(this->sensorButton1);
			this->Intersection->Controls->Add(this->id_label);
			this->Intersection->Controls->Add(speed_chart);
			this->Intersection->Controls->Add(this->location_label);
			this->Intersection->Controls->Add(this->button2);
			this->Intersection->Controls->Add(this->label1);
			this->Intersection->Controls->Add(this->total_count);
			this->Intersection->Controls->Add(this->filter_label);
			this->Intersection->Controls->Add(this->average_speed_label);
			this->Intersection->Controls->Add(this->filter_button);
			this->Intersection->Controls->Add(this->min_height);
			this->Intersection->Controls->Add(this->max_height);
			this->Intersection->Location = System::Drawing::Point(4, 54);
			this->Intersection->Name = L"Intersection";
			this->Intersection->Padding = System::Windows::Forms::Padding(3);
			this->Intersection->Size = System::Drawing::Size(570, 545);
			this->Intersection->TabIndex = 1;
			this->Intersection->Text = L"   View Sensor Data   ";
			this->Intersection->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// sensorButton6
			// 
			this->sensorButton6->AutoSize = true;
			this->sensorButton6->Location = System::Drawing::Point(22, 225);
			this->sensorButton6->Name = L"sensorButton6";
			this->sensorButton6->Size = System::Drawing::Size(67, 17);
			this->sensorButton6->TabIndex = 34;
			this->sensorButton6->TabStop = true;
			this->sensorButton6->Text = L"Sensor 6";
			this->sensorButton6->UseVisualStyleBackColor = true;
			this->sensorButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton6_CheckedChanged);
			// 
			// sensorButton8
			// 
			this->sensorButton8->AutoSize = true;
			this->sensorButton8->Location = System::Drawing::Point(22, 312);
			this->sensorButton8->Name = L"sensorButton8";
			this->sensorButton8->Size = System::Drawing::Size(67, 17);
			this->sensorButton8->TabIndex = 33;
			this->sensorButton8->TabStop = true;
			this->sensorButton8->Text = L"Sensor 8";
			this->sensorButton8->UseVisualStyleBackColor = true;
			this->sensorButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton8_CheckedChanged);
			// 
			// sensorButton7
			// 
			this->sensorButton7->AutoSize = true;
			this->sensorButton7->Location = System::Drawing::Point(22, 268);
			this->sensorButton7->Name = L"sensorButton7";
			this->sensorButton7->Size = System::Drawing::Size(67, 17);
			this->sensorButton7->TabIndex = 31;
			this->sensorButton7->TabStop = true;
			this->sensorButton7->Text = L"Sensor 7";
			this->sensorButton7->UseVisualStyleBackColor = true;
			this->sensorButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton7_CheckedChanged);
			// 
			// sensorButton5
			// 
			this->sensorButton5->AutoSize = true;
			this->sensorButton5->Location = System::Drawing::Point(22, 183);
			this->sensorButton5->Name = L"sensorButton5";
			this->sensorButton5->Size = System::Drawing::Size(67, 17);
			this->sensorButton5->TabIndex = 30;
			this->sensorButton5->TabStop = true;
			this->sensorButton5->Text = L"Sensor 5";
			this->sensorButton5->UseVisualStyleBackColor = true;
			this->sensorButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton5_CheckedChanged);
			// 
			// sensorButton2
			// 
			this->sensorButton2->AutoSize = true;
			this->sensorButton2->Location = System::Drawing::Point(22, 63);
			this->sensorButton2->Name = L"sensorButton2";
			this->sensorButton2->Size = System::Drawing::Size(67, 17);
			this->sensorButton2->TabIndex = 29;
			this->sensorButton2->TabStop = true;
			this->sensorButton2->Text = L"Sensor 2";
			this->sensorButton2->UseVisualStyleBackColor = true;
			this->sensorButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton2_CheckedChanged);
			// 
			// sensorButton4
			// 
			this->sensorButton4->AutoSize = true;
			this->sensorButton4->Location = System::Drawing::Point(22, 142);
			this->sensorButton4->Name = L"sensorButton4";
			this->sensorButton4->Size = System::Drawing::Size(67, 17);
			this->sensorButton4->TabIndex = 28;
			this->sensorButton4->TabStop = true;
			this->sensorButton4->Text = L"Sensor 4";
			this->sensorButton4->UseVisualStyleBackColor = true;
			this->sensorButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton4_CheckedChanged);
			// 
			// sensorButton3
			// 
			this->sensorButton3->AutoSize = true;
			this->sensorButton3->Location = System::Drawing::Point(22, 100);
			this->sensorButton3->Name = L"sensorButton3";
			this->sensorButton3->Size = System::Drawing::Size(67, 17);
			this->sensorButton3->TabIndex = 27;
			this->sensorButton3->TabStop = true;
			this->sensorButton3->Text = L"Sensor 3";
			this->sensorButton3->UseVisualStyleBackColor = true;
			this->sensorButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton3_CheckedChanged);
			// 
			// sensorButton1
			// 
			this->sensorButton1->AutoSize = true;
			this->sensorButton1->Location = System::Drawing::Point(22, 26);
			this->sensorButton1->Name = L"sensorButton1";
			this->sensorButton1->Size = System::Drawing::Size(67, 17);
			this->sensorButton1->TabIndex = 26;
			this->sensorButton1->TabStop = true;
			this->sensorButton1->Text = L"Sensor 1";
			this->sensorButton1->UseVisualStyleBackColor = true;
			this->sensorButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sensorButton1_CheckedChanged);
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Location = System::Drawing::Point(183, 262);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(33, 13);
			this->id_label->TabIndex = 25;
			this->id_label->Text = L"ID:  0";
			// 
			// location_label
			// 
			this->location_label->AutoSize = true;
			this->location_label->Location = System::Drawing::Point(180, 291);
			this->location_label->Name = L"location_label";
			this->location_label->Size = System::Drawing::Size(57, 13);
			this->location_label->TabIndex = 24;
			this->location_label->Text = L"Location:  ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(410, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Export";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 369);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Max Height";
			// 
			// total_count
			// 
			this->total_count->AutoSize = true;
			this->total_count->Location = System::Drawing::Point(330, 262);
			this->total_count->Name = L"total_count";
			this->total_count->Size = System::Drawing::Size(80, 13);
			this->total_count->TabIndex = 17;
			this->total_count->Text = L"Total Count:   0";
			// 
			// filter_label
			// 
			this->filter_label->AutoSize = true;
			this->filter_label->Location = System::Drawing::Point(180, 343);
			this->filter_label->Name = L"filter_label";
			this->filter_label->Size = System::Drawing::Size(58, 13);
			this->filter_label->TabIndex = 22;
			this->filter_label->Text = L"Min Height";
			// 
			// average_speed_label
			// 
			this->average_speed_label->AutoSize = true;
			this->average_speed_label->Location = System::Drawing::Point(330, 292);
			this->average_speed_label->Name = L"average_speed_label";
			this->average_speed_label->Size = System::Drawing::Size(90, 13);
			this->average_speed_label->TabIndex = 18;
			this->average_speed_label->Text = L"Average Speed:  ";
			// 
			// filter_button
			// 
			this->filter_button->Location = System::Drawing::Point(308, 343);
			this->filter_button->Name = L"filter_button";
			this->filter_button->Size = System::Drawing::Size(75, 23);
			this->filter_button->TabIndex = 21;
			this->filter_button->Text = L"Filter";
			this->filter_button->UseVisualStyleBackColor = true;
			this->filter_button->Click += gcnew System::EventHandler(this, &MyForm::filter_button_Click);
			// 
			// min_height
			// 
			this->min_height->Location = System::Drawing::Point(249, 340);
			this->min_height->Name = L"min_height";
			this->min_height->Size = System::Drawing::Size(35, 20);
			this->min_height->TabIndex = 19;
			this->min_height->Text = L"0";
			this->min_height->TextChanged += gcnew System::EventHandler(this, &MyForm::min_height_TextChanged);
			// 
			// max_height
			// 
			this->max_height->Location = System::Drawing::Point(251, 366);
			this->max_height->Name = L"max_height";
			this->max_height->Size = System::Drawing::Size(33, 20);
			this->max_height->TabIndex = 20;
			this->max_height->Text = L"100";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->pictureBox5);
			this->tabPage2->Controls->Add(this->pictureBox4);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->NSO);
			this->tabPage2->Controls->Add(this->SNO);
			this->tabPage2->Controls->Add(this->NSI);
			this->tabPage2->Controls->Add(this->WEI);
			this->tabPage2->Controls->Add(this->EWO);
			this->tabPage2->Controls->Add(this->EWI);
			this->tabPage2->Controls->Add(this->WEO);
			this->tabPage2->Controls->Add(this->SNI);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 54);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(570, 545);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"View Intersection Traffic Flow     ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(252, 420);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 31);
			this->label7->TabIndex = 19;
			this->label7->Text = L"S";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(40, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 31);
			this->label6->TabIndex = 18;
			this->label6->Text = L"W";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(464, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 31);
			this->label5->TabIndex = 17;
			this->label5->Text = L"E";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(257, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 31);
			this->label4->TabIndex = 16;
			this->label4->Text = L"N";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(389, 340);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(79, 77);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(79, 340);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(79, 77);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(79, 35);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 77);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(389, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(79, 77);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// NSO
			// 
			this->NSO->Location = System::Drawing::Point(234, 307);
			this->NSO->Name = L"NSO";
			this->NSO->Size = System::Drawing::Size(26, 20);
			this->NSO->TabIndex = 11;
			// 
			// SNO
			// 
			this->SNO->Location = System::Drawing::Point(280, 122);
			this->SNO->Name = L"SNO";
			this->SNO->Size = System::Drawing::Size(26, 20);
			this->SNO->TabIndex = 10;
			// 
			// NSI
			// 
			this->NSI->Location = System::Drawing::Point(234, 122);
			this->NSI->Name = L"NSI";
			this->NSI->Size = System::Drawing::Size(26, 20);
			this->NSI->TabIndex = 9;
			// 
			// WEI
			// 
			this->WEI->Location = System::Drawing::Point(163, 242);
			this->WEI->Name = L"WEI";
			this->WEI->Size = System::Drawing::Size(26, 20);
			this->WEI->TabIndex = 8;
			// 
			// EWO
			// 
			this->EWO->Location = System::Drawing::Point(163, 190);
			this->EWO->Name = L"EWO";
			this->EWO->Size = System::Drawing::Size(26, 20);
			this->EWO->TabIndex = 7;
			// 
			// EWI
			// 
			this->EWI->Location = System::Drawing::Point(350, 190);
			this->EWI->Name = L"EWI";
			this->EWI->Size = System::Drawing::Size(26, 20);
			this->EWI->TabIndex = 6;
			// 
			// WEO
			// 
			this->WEO->Location = System::Drawing::Point(350, 242);
			this->WEO->Name = L"WEO";
			this->WEO->Size = System::Drawing::Size(26, 20);
			this->WEO->TabIndex = 5;
			// 
			// SNI
			// 
			this->SNI->Location = System::Drawing::Point(280, 307);
			this->SNI->Name = L"SNI";
			this->SNI->Size = System::Drawing::Size(26, 20);
			this->SNI->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(79, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(389, 382);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 619);
			this->Controls->Add(this->tab);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(speed_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->tab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->Intersection->ResumeLayout(false);
			this->Intersection->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void import_button_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void speed_chart_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void max_height_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void load_sensor();
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void input_file_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void filter_button_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void min_height_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void sensorButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void sensorButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}



/*
addButton_Click
Button newButton = new Button();
newButton.Name = controlNameTextBox.Text;
newButton.Text = controlTextTextBox.Text;
sampleFlowLayourPanel.Controls.add(newButton);
*/