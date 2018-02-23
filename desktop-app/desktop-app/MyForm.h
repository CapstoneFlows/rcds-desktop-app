#pragma once
#include <iostream>
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
		void initialize_sensor();
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
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  import_button;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  speed_chart;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  total_count_label;
	private: System::Windows::Forms::Label^  total_count_value;
	private: System::Windows::Forms::Label^  average_speed_label;
	private: System::Windows::Forms::Label^  average_speed_value;
	private: System::Windows::Forms::TextBox^  min_height;
	private: System::Windows::Forms::TextBox^  max_height;
	private: System::Windows::Forms::Button^  filter_button;
	private: System::Windows::Forms::Label^  filter_label;
	private: System::Windows::Forms::Label^  label1;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->import_button = (gcnew System::Windows::Forms::Button());
			this->speed_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->total_count_label = (gcnew System::Windows::Forms::Label());
			this->total_count_value = (gcnew System::Windows::Forms::Label());
			this->average_speed_label = (gcnew System::Windows::Forms::Label());
			this->average_speed_value = (gcnew System::Windows::Forms::Label());
			this->min_height = (gcnew System::Windows::Forms::TextBox());
			this->max_height = (gcnew System::Windows::Forms::TextBox());
			this->filter_button = (gcnew System::Windows::Forms::Button());
			this->filter_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed_chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(126, 322);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sensor 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// import_button
			// 
			this->import_button->AccessibleName = L"";
			this->import_button->BackColor = System::Drawing::SystemColors::Control;
			this->import_button->Location = System::Drawing::Point(32, 350);
			this->import_button->Name = L"import_button";
			this->import_button->Size = System::Drawing::Size(75, 23);
			this->import_button->TabIndex = 1;
			this->import_button->Text = L"Import";
			this->import_button->UseVisualStyleBackColor = false;
			this->import_button->Click += gcnew System::EventHandler(this, &MyForm::import_button_Click);
			// 
			// speed_chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->speed_chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->speed_chart->Legends->Add(legend1);
			this->speed_chart->Location = System::Drawing::Point(182, 12);
			this->speed_chart->Name = L"speed_chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Sensor";
			this->speed_chart->Series->Add(series1);
			this->speed_chart->Size = System::Drawing::Size(300, 183);
			this->speed_chart->TabIndex = 2;
			this->speed_chart->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Speed vs. Time";
			this->speed_chart->Titles->Add(title1);
			this->speed_chart->Click += gcnew System::EventHandler(this, &MyForm::speed_chart_Click);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->TableName = L"Table1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(407, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Export";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// total_count_label
			// 
			this->total_count_label->AutoSize = true;
			this->total_count_label->Location = System::Drawing::Point(182, 221);
			this->total_count_label->Name = L"total_count_label";
			this->total_count_label->Size = System::Drawing::Size(68, 13);
			this->total_count_label->TabIndex = 4;
			this->total_count_label->Text = L"Total Count: ";
			this->total_count_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// total_count_value
			// 
			this->total_count_value->AutoSize = true;
			this->total_count_value->Location = System::Drawing::Point(257, 221);
			this->total_count_value->Name = L"total_count_value";
			this->total_count_value->Size = System::Drawing::Size(13, 13);
			this->total_count_value->TabIndex = 5;
			this->total_count_value->Text = L"0";
			this->total_count_value->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// average_speed_label
			// 
			this->average_speed_label->AutoSize = true;
			this->average_speed_label->Location = System::Drawing::Point(182, 251);
			this->average_speed_label->Name = L"average_speed_label";
			this->average_speed_label->Size = System::Drawing::Size(81, 13);
			this->average_speed_label->TabIndex = 6;
			this->average_speed_label->Text = L"Average Speed";
			// 
			// average_speed_value
			// 
			this->average_speed_value->AutoSize = true;
			this->average_speed_value->Location = System::Drawing::Point(273, 251);
			this->average_speed_value->Name = L"average_speed_value";
			this->average_speed_value->Size = System::Drawing::Size(36, 13);
			this->average_speed_value->TabIndex = 7;
			this->average_speed_value->Text = L"0 mph";
			// 
			// min_height
			// 
			this->min_height->Location = System::Drawing::Point(254, 292);
			this->min_height->Name = L"min_height";
			this->min_height->Size = System::Drawing::Size(35, 20);
			this->min_height->TabIndex = 8;
			this->min_height->Text = L"0";
			this->min_height->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// max_height
			// 
			this->max_height->Location = System::Drawing::Point(256, 318);
			this->max_height->Name = L"max_height";
			this->max_height->Size = System::Drawing::Size(33, 20);
			this->max_height->TabIndex = 9;
			this->max_height->Text = L"100";
			this->max_height->TextChanged += gcnew System::EventHandler(this, &MyForm::max_height_TextChanged);
			// 
			// filter_button
			// 
			this->filter_button->Location = System::Drawing::Point(305, 350);
			this->filter_button->Name = L"filter_button";
			this->filter_button->Size = System::Drawing::Size(75, 23);
			this->filter_button->TabIndex = 10;
			this->filter_button->Text = L"Filter";
			this->filter_button->UseVisualStyleBackColor = true;
			this->filter_button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// filter_label
			// 
			this->filter_label->AutoSize = true;
			this->filter_label->Location = System::Drawing::Point(185, 295);
			this->filter_label->Name = L"filter_label";
			this->filter_label->Size = System::Drawing::Size(58, 13);
			this->filter_label->TabIndex = 11;
			this->filter_label->Text = L"Min Height";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(185, 321);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Max Height";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 395);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->filter_label);
			this->Controls->Add(this->filter_button);
			this->Controls->Add(this->max_height);
			this->Controls->Add(this->min_height);
			this->Controls->Add(this->average_speed_value);
			this->Controls->Add(this->average_speed_label);
			this->Controls->Add(this->total_count_value);
			this->Controls->Add(this->total_count_label);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->speed_chart);
			this->Controls->Add(this->import_button);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speed_chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void import_button_Click(System::Object^  sender, System::EventArgs^  e) {
	}
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
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	total_count_value->Text = "4"; //"" + sensor1->total_count();
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