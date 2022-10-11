#pragma once

namespace PuzzleGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button13;

	private: System::Windows::Forms::Button^ button12;


	private: System::Windows::Forms::Button^ button11;



	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::Button^ button7;




	private: System::Windows::Forms::Button^ button6;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button25;


	private: System::Windows::Forms::Button^ button24;


	private: System::Windows::Forms::Button^ button23;


	private: System::Windows::Forms::Button^ button22;


	private: System::Windows::Forms::Button^ button21;


	private: System::Windows::Forms::Button^ button20;


	private: System::Windows::Forms::Button^ button19;


	private: System::Windows::Forms::Button^ button18;


	private: System::Windows::Forms::Button^ button17;


	private: System::Windows::Forms::Button^ button16;


	private: System::Windows::Forms::Button^ button15;


	private: System::Windows::Forms::Button^ button14;


	private: System::Windows::Forms::Button^ button10;


	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ buttonFirst = nullptr;
	private: System::Windows::Forms::Button^ buttonSecond;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1328, 100);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->button25);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(12, 118);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(663, 534);
			this->panel2->TabIndex = 1;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Green;
			this->button25->Location = System::Drawing::Point(519, 402);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(99, 89);
			this->button25->TabIndex = 23;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::btnNum25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(403, 402);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(99, 89);
			this->button24->TabIndex = 22;
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Blue;
			this->button23->Location = System::Drawing::Point(288, 402);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(99, 89);
			this->button23->TabIndex = 21;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::btnNum23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(169, 402);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(99, 89);
			this->button22->TabIndex = 20;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Red;
			this->button21->Location = System::Drawing::Point(54, 402);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(99, 89);
			this->button21->TabIndex = 19;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::btnNum21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Green;
			this->button20->Location = System::Drawing::Point(519, 307);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(99, 89);
			this->button20->TabIndex = 18;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::btnNum20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(403, 307);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(99, 89);
			this->button19->TabIndex = 17;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btnNum19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Blue;
			this->button18->Location = System::Drawing::Point(288, 307);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(99, 89);
			this->button18->TabIndex = 16;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btnNum18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(169, 307);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(99, 89);
			this->button17->TabIndex = 15;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::btnNum17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Red;
			this->button16->Location = System::Drawing::Point(54, 307);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(99, 89);
			this->button16->TabIndex = 14;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btnNum16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Green;
			this->button15->Location = System::Drawing::Point(519, 212);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(99, 89);
			this->button15->TabIndex = 13;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btnNum15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(403, 212);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 89);
			this->button14->TabIndex = 12;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Green;
			this->button10->Location = System::Drawing::Point(519, 117);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 89);
			this->button10->TabIndex = 11;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNum10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(403, 117);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 89);
			this->button9->TabIndex = 10;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btnNum9_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->Location = System::Drawing::Point(519, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 89);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnNum5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(403, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 89);
			this->button4->TabIndex = 9;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Blue;
			this->button13->Location = System::Drawing::Point(288, 212);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 89);
			this->button13->TabIndex = 8;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::btnNum13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(169, 212);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 89);
			this->button12->TabIndex = 7;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(54, 212);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 89);
			this->button11->TabIndex = 6;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btnNum11_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Blue;
			this->button8->Location = System::Drawing::Point(288, 117);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 89);
			this->button8->TabIndex = 5;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnNum8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(169, 117);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 89);
			this->button7->TabIndex = 4;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNum7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Location = System::Drawing::Point(54, 117);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 89);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNum6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Location = System::Drawing::Point(288, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 89);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnNum3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(169, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 89);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(54, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 89);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnNum1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Teal;
			this->panel3->Location = System::Drawing::Point(681, 118);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(321, 534);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Location = System::Drawing::Point(1019, 118);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(321, 534);
			this->panel4->TabIndex = 3;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Red;
			this->button26->Location = System::Drawing::Point(54, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(99, 89);
			this->button26->TabIndex = 24;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Blue;
			this->button27->Location = System::Drawing::Point(288, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(99, 89);
			this->button27->TabIndex = 24;
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Green;
			this->button28->Location = System::Drawing::Point(519, 0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(99, 89);
			this->button28->TabIndex = 24;
			this->button28->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1352, 749);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PuzzleGame";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


		   public:System::Void SolutionChecker() {
			   if (button1->BackColor == Color::Red && button6->BackColor == Color::Red && button11->BackColor == Color::Red && button16->BackColor == Color::Red && button21->BackColor == Color::Red &&
				   button3->BackColor == Color::Blue && button8->BackColor == Color::Blue && button13->BackColor == Color::Blue && button18->BackColor == Color::Blue && button23->BackColor == Color::Blue &&
				   button5->BackColor == Color::Green && button10->BackColor == Color::Green && button15->BackColor == Color::Green && button20->BackColor == Color::Green && button25->BackColor == Color::Green) {
				   MessageBox::Show("“ы победила лю!");
			   }

		   }

		   public:System::Void SpotChecker(Button ^b1) {
			   b1->BackColor = buttonFirst->BackColor;
			   buttonFirst->BackColor=Color::White;
			   buttonFirst = nullptr;
			   SolutionChecker();
			   
		   }
			
	private:System::Void btnNum1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonFirst == button1)
			return;
		if (button1->BackColor != Color::White && buttonFirst == nullptr) {
			buttonFirst = button1;
			return;
		}
		if (buttonFirst == button6) {

			SpotChecker(button1);
		}
	}
		   private:System::Void btnNum3_Click(System::Object^ sender, System::EventArgs^ e) {
			   if (buttonFirst == button3)
				   return;
			   if (button3->BackColor != Color::White && buttonFirst == nullptr) {
				   buttonFirst = button3;
				   return;
			   }
			   if (buttonFirst == button8) {

				   SpotChecker(button3);
			   }
		   }
				  private:System::Void btnNum5_Click(System::Object^ sender, System::EventArgs^ e) {
					  if (buttonFirst == button5)
						  return;
					  if (button5->BackColor != Color::White && buttonFirst == nullptr) {
						  buttonFirst = button5;
						  return;
					  }
					  if (buttonFirst == button10) {

						  SpotChecker(button5);
					  }
				  }
			
		   private:System::Void btnNum6_Click(System::Object ^ sender, System::EventArgs ^ e) {
			   if (buttonFirst == button6)
				   return;
			   if (button6->BackColor != Color::White && buttonFirst == nullptr) {
				   buttonFirst = button6;
				   return;
		   }
			   if (buttonFirst == button7 || buttonFirst == button1 || buttonFirst == button11) {
				   
					   SpotChecker(button6);
			   }

		   }
			private:System::Void btnNum7_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button7)
					return;
				if (button7->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button7;
					return;
				}
				if (buttonFirst == button6 || buttonFirst == button8 ) {

					SpotChecker(button7);
				}

			 }
			private:System::Void btnNum8_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button8)
					return;
				if (button8->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button8;
					return;
				}
				if (buttonFirst == button7 || buttonFirst == button9 || buttonFirst == button3 || buttonFirst == button13) {

					SpotChecker(button8);
				}
			}
		  private:System::Void btnNum9_Click(System::Object^ sender, System::EventArgs^ e) {
			  if (buttonFirst == button9)
				  return;
			  if (button9->BackColor != Color::White && buttonFirst == nullptr) {
				  buttonFirst = button9;
				  return;
			  }
			  if (buttonFirst == button8 || buttonFirst == button10) {

				  SpotChecker(button9);
			  }

		  }
			private:System::Void btnNum10_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button10)
					return;
				if (button10->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button10;
					return;
				}
				if (buttonFirst == button5 || buttonFirst == button9 || buttonFirst == button15) {

					SpotChecker(button10);
				}

			}
			private:System::Void btnNum11_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button11)
					return;
				if (button11->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button11;
					return;
				}
				if (buttonFirst == button6 || buttonFirst == button16 ) {

					SpotChecker(button11);
				}

			}
			private:System::Void btnNum13_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button13)
					return;
				if (button13->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button13;
					return;
				}
				if (buttonFirst == button8 || buttonFirst == button18 ) {

					SpotChecker(button13);
				}

			}
			private:System::Void btnNum15_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button15)
					return;
				if (button15->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button15;
					return;
				}
				if (buttonFirst == button10 || buttonFirst == button20) {

					SpotChecker(button15);
				}

			}
			private:System::Void btnNum16_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button16)
					return;
				if (button16->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button16;
					return;
				}
				if (buttonFirst == button11 || buttonFirst == button21 || buttonFirst == button17) {

					SpotChecker(button16);
				}

			}
			private:System::Void btnNum17_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button17)
					return;
				if (button17->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button17;
					return;
				}
				if (buttonFirst == button18 || buttonFirst == button16 ) {

					SpotChecker(button17);
				}

			}
			private:System::Void btnNum18_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button18)
					return;
				if (button18->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button18;
					return;
				}
				if (buttonFirst == button17 || buttonFirst == button19 || buttonFirst == button13 || buttonFirst == button23) {

					SpotChecker(button18);
				}

			}
			private:System::Void btnNum19_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button19)
					return;
				if (button19->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button19;
					return;
				}
				if (buttonFirst == button18 || buttonFirst == button20) {

					SpotChecker(button19);
				}

			}
			private:System::Void btnNum20_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button20)
					return;
				if (button20->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button20;
					return;
				}
				if (buttonFirst == button15 || buttonFirst == button25 || buttonFirst == button19) {

					SpotChecker(button20);
				}

			}
			private:System::Void btnNum21_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button21)
					return;
				if (button21->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button21;
					return;
				}
				if (buttonFirst == button16 ) {

					SpotChecker(button21);
				}

			}
			private:System::Void btnNum23_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button23)
					return;
				if (button23->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button23;
					return;
				}
				if (buttonFirst == button18) {

					SpotChecker(button23);
				}

			}
			private:System::Void btnNum25_Click(System::Object^ sender, System::EventArgs^ e) {
				if (buttonFirst == button25)
					return;
				if (button25->BackColor != Color::White && buttonFirst == nullptr) {
					buttonFirst = button25;
					return;
				}
				if (buttonFirst == button20) {

					SpotChecker(button25);
				}

			}
	
};
}
