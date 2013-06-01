#pragma once

namespace RGZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	static double TimerIndex = 0; //Переменная-таймер
	static int  LapNumber = 0, //Переменая, содаржащая количество пройденных кругов
				FlagFirst = 0, //Флаг для установки флаговой сигнализации в зоне 1
				FlagSecond = 0, //Флаг для установки флаговой сигнализации в зоне 2
				FlagToAll = 0, //Флаг для общего запрета использования системы (дирекция, команда, гонщик)
				FlagToAllMain = 0, //Флаг для запрета использования системы (команда, гонщик)
			    FlagIntervalOrBrake1 = 0, //Флаг для контроля допустимого интервала в зоне 1
				FlagIntervalOrBrake2 = 0; //Флаг для контроля допустимого интервала в зоне 2

	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label11;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1 - логическое объединение элементов, связанных с общим контролем дирекцией гонки
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 71);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(520, 61);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дирекция гонки";
			// 
			// label3 - название кнопки
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(360, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Флаги (зона 2)";
			// 
			// label2 - название кнопки
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(191, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Флаги (зона 1)";
			// 
			// button3 - кнопка установки флаговой сигнализации (зона 2)
			// 
			this->button3->Location = System::Drawing::Point(363, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Установить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2 - кнопка установки флаговой сигнализации (зона 1)
			// 
			this->button2->Location = System::Drawing::Point(194, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Установить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1 - кнопка, полностью выключающая систему
			// 
			this->button1->Location = System::Drawing::Point(27, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выключить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1 - название кнопки
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DRS (дирекция)";
			// 
			// groupBox2 - логическое объединение элементов, связанных с контролем инженера
			// 
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(12, 138);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(520, 61);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Гонка";
			// 
			// numericUpDown2 - поле с интервалом межд болидами (зона 2)
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown2->Location = System::Drawing::Point(363, 35);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, System::Int32::MinValue});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(130, 20);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 131072});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// numericUpDown1 - поле с интервалом между болидами (зона 1)
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown1->Location = System::Drawing::Point(194, 35);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, System::Int32::MinValue});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(130, 20);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 131072});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label4 - подпиь поля
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(360, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Интервал (зона 2)";
			// 
			// label5 - подпись поля
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(191, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Интервал (зона 1)";
			// 
			// button6 - кнопка выключения системы (инженер)
			// 
			this->button6->Location = System::Drawing::Point(27, 32);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 23);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Выключить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label6 - подпись кнопки
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"DRS (инженер)";
			// 
			// groupBox3 - логическое объединение элементов, связанных с болидом
			// 
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Location = System::Drawing::Point(12, 205);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(520, 61);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Болид";
			// 
			// numericUpDown4 - поле со временем торможения (зона 2)
			// 
			this->numericUpDown4->DecimalPlaces = 1;
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->numericUpDown4->Location = System::Drawing::Point(363, 35);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(130, 20);
			this->numericUpDown4->TabIndex = 9;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown4_ValueChanged);
			// 
			// numericUpDown3 - поле со временем торможения (зона 1)
			// 
			this->numericUpDown3->DecimalPlaces = 1;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->numericUpDown3->Location = System::Drawing::Point(194, 35);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(130, 20);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// label7 - название поля
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(360, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Торможение (зона 2)";
			// 
			// label8 - название поля
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(191, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Торможение (зона 1)";
			// 
			// button9 - кнопка отключения системы (с болида) 
			// 
			this->button9->Location = System::Drawing::Point(27, 32);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 23);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Выключить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// label9 - название кнопки 
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"DRS (болид)";
			// 
			// button10 - кнопка запуска имитации
			// 
			this->button10->Location = System::Drawing::Point(232, 284);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 23);
			this->button10->TabIndex = 8;
			this->button10->Text = L"Запуск";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11 - кнопка сброса состояния в исходное
			// 
			this->button11->Location = System::Drawing::Point(334, 284);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 23);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Сброс";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12 - информационная кнопка (вывод сообщения о программе)
			// 
			this->button12->Location = System::Drawing::Point(436, 284);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(96, 23);
			this->button12->TabIndex = 10;
			this->button12->Text = L"О программе";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// label10 - сообщение от таймера
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"0,0";
			// 
			// timer1 - таймер
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label11 - сообщение о количестве кругов
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(80, 289);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"0";
			// 
			// label14 - сообщение-пояснение работы (причина выключения)
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(37, 42);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(212, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Зона активации DRS еще не достигнута";
			// 
			// label21 - сообщение о работе (вкл/выкл) - основное сообщение
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(35, 12);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(171, 23);
			this->label21->TabIndex = 22;
			this->label21->Text = L"DRS выключена";
			// 
			// label12 - сообщение о зонах (DRS/обычная)
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(372, 19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Обычная зона";
			// 
			// Form1 - инициализация формы
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 325);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Имитация работы системы DRS";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Активирование таймера; основная функция программы
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 TimerIndex += 0.001 * timer1->Interval;
			 double Comparing = TimerIndex;
			 label10->Text = String::Format("{0:F3}", TimerIndex);
			 
			 	//Выключение по общему флагу
				if (FlagToAll)
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Использование DRS ограничено дирекцией или командой"; 
				}
				//Выключение по флаговой сигнализации в зоне 1 (зона 1 лежит в интервале от 5 до 10 секунд)
				else if ((FlagFirst)&&((Comparing >= 5)&&(Comparing <= 10)))
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Установлена флаговая сигнализация в зоне 1";
				}
				//Выключение по флаговой сигнализации в зоне 2 (зона 2 лежит в интервале от 15 до 20 секунд)
				else if ((FlagSecond)&&((Comparing >= 15)&&(Comparing <= 20)))
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Установлена флаговая сигнализация в зоне 2";
				}
				//Выключение по интервалам в зонах 1 и 2 
				else if ((FlagIntervalOrBrake1)||(FlagIntervalOrBrake2))
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Недостаточный интервал между машинами";
				}
				//Включение системы в зоне 1 или 2 (выключение по времени начала торможения)
				else if ((Comparing >= 5)&&(Comparing <= 5 + (double) numericUpDown3->Value) || ((Comparing >= 15)&&(Comparing <= 15 + (double) numericUpDown4->Value)))
				{
					label21->Text = "Система DRS включена";
					label14->Text = "Выключение при торможении";
				}
				//Выключение после начала торможения
				else if ((Comparing >= 5)&&(Comparing <= 10) || (Comparing >= 15)&&(Comparing <= 20))
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Cистема отключена из-за торможения";
				}
				//Выключение вне зоны использования системы (обычное состояние) и сообщение об этом
				if ((Comparing <= 5) || (Comparing >= 20) || ((Comparing >= 10)&&(Comparing <= 15)))
				{
					label21->Text = "Система DRS выключена";
					label14->Text = "Зона активации DRS еще не достигнута";
					label12->Text = "Обычная зона";
				}
				//Сообщение о зоне использовнаия системы
				else 
					label12->Text = "Зона использования DRS";
			
			//Начало нового круга после 25 секунд; увеличение счетчика кругов на 1 и его вывод
			if (TimerIndex > 25)
			{
				label10->Text = "0,0";
				TimerIndex = 0;
				LapNumber++;
				label11->Text = String::Format("{0}", LapNumber);
			 }
		 }

//Кнопка запуска таймера
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = !(timer1->Enabled); //запуск или сброс
			 if (timer1->Enabled)
				 button10->Text = "Пауза";
			 else
				 button10->Text = "Запуск";
		 }

//Кнопка сброса состояний в исходное
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = false;
			 label10->Text = "0,0";
			 button10->Text = "Запуск";
			 TimerIndex = 0;
			 label11->Text = String::Format("{0}", "0");
			 LapNumber = 0;
			 FlagFirst = 0;
			 FlagSecond = 0;
			 FlagToAll = 0;
			 FlagToAllMain = 0;
			 FlagIntervalOrBrake1 = 0;
			 FlagIntervalOrBrake2 = 0;
			 numericUpDown1->Value = 1;
			 numericUpDown2->Value = 1;
			 numericUpDown3->Value = 5;
			 numericUpDown4->Value = 5;
			 label14->Text = "Зона активации DRS еще не достигнута";
			 label21->Text = "Система DRS выключена";
			 label12->Text = "Обычная зона";
		 }

//Кнопка "О программе"
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Данная программа позволяет имитировать условия для включения или выключения системы заднего антикрыла изменяемой геометрии (DRS). В процессе имитации каждые 25 секунд система может быть активирована дважды; при этом будет выведено соответсвующее сообщение. При невозможности активации системы будет указана причина." + "\n\n" + "Для активации системы должны быть выполнены следующие условия: " + "\n" + "1. Использование DRS не ограничено дирекцией гонки, командой или гонщиком (устанавливается с помощью кнопок \"DRS\")"  + "\n" + "2. Интервал между впереди идущим автомобилем в данной зоне не должен составлять более 1 секунды (устанавливается с помощью полей \"Интервал\")" + "\n" + "3. В данной зоне отсутствует флаговая сигнализация (желтый, красный или черный флаг; устанавливается с помощью кнопок \"Флаги\")" + "\n\n" + "Если пилот болида начинает торможение ранее окончания зоны использования DRS, данная систеа автоматически отключается (устанавивается с помощью полей \"Торможение\")" + "\n\n" + "Для запуска симуляции нажмите кнопку \"Запуск\"" , "О программе");
		 }

//Кнопка установки флаговой сигнализации в зоне 1
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 FlagFirst = !(FlagFirst); //установка или снятие
			 if (FlagFirst)
				 button2->Text = "Снять";
			 else
				 button2->Text = "Установить";
		 }

//Кнопка установки флаговой сигнализации в зоне 2
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 FlagSecond = !(FlagSecond); //установка или снятие
			 if (FlagSecond)
				 button3->Text = "Снять";
			 else
				 button3->Text = "Установить";
		 }

//Кнопка отключения системы дирекцией гонки (блокирует остальные кнопки отключения)
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 FlagToAllMain = !(FlagToAllMain); //установка или снятие
			 if (FlagToAllMain)
			 {
				 button1->Text = "Включить";
				 button6->Text = "Заблокировано";
				 button9->Text = "Заблокировано";
				 FlagToAll = 1; //установка флага (инженер\гонщик)

			 }
			 else
			 {
				 button1->Text = "Выключить";
				 button6->Text = "Выключить";
				 button9->Text = "Выключить";
				 FlagToAll = 0; //снятие флага (инженер\гонщик)
			 }
		 }

//Кнопка отключения системы командой
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 FlagToAll = !(FlagToAll); //установка или снятие
			 if (!(FlagToAllMain))
			 {
				 if (FlagToAll)
					 button6->Text = "Включить";
				 else
					 button6->Text = "Выключить";
			 }
			 else
			 {
				 button6->Text = "Заблокировано";
				 FlagToAll = 1;
			 }
		 }

//Кнопка отключения системы гонщиком
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 FlagToAll = !(FlagToAll); //установка или снятие
			 if (!(FlagToAllMain))
			 {
				 if (FlagToAll)
					 button9->Text = "Включить";
				 else
					 button9->Text = "Выключить";
			 }
			 else
			 {
				 button9->Text = "Заблокировано";
				 FlagToAll = 1;
			 }
		 }

//Поле установки допустимого интервала между болидами в зоне 1
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((numericUpDown1->Value > 0)&&(numericUpDown1->Value < 1)) 
				  FlagIntervalOrBrake1 = 0;
			 else
				  FlagIntervalOrBrake1 = 1;
		 }

//Поле установки допустимого интервала между болидами в зоне 2
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ((numericUpDown2->Value > 0)&&(numericUpDown2->Value < 1))
				  FlagIntervalOrBrake2 = 0;
			 else
				  FlagIntervalOrBrake2 = 1;
		 }

//Поле установки начала торможения в зоне 1
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (numericUpDown3->Value > 10)
				  FlagIntervalOrBrake1 = 1;
			 else
				  FlagIntervalOrBrake1 = 0;
		 }

//Поле установки начала торможения в зоне 2
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (numericUpDown4->Value > 10)
				  FlagIntervalOrBrake1 = 1;
			 else
				  FlagIntervalOrBrake1 = 0;
		 }
};
}

