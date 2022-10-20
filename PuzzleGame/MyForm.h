#pragma once
#include <vector>

namespace PuzzleGame {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Сводка для MyForm
  /// </summary>
  public ref class MyForm: public System::Windows::Forms::Form {
    public: MyForm(void) {
      InitializeComponent();
      //
      //TODO: добавьте код конструктора
      //
    }

    protected:
      /// <summary>
      /// Освободить все используемые ресурсы.
      /// </summary>
      ~MyForm() {
        if (components) {
          delete components;
        }
      }
    private: System::Windows::Forms::Panel ^ panel1;
    private: System::Windows::Forms::Panel ^ panel2;
    private: System::Windows::Forms::Button ^ button13;

    private: System::Windows::Forms::Button ^ button12;

    private: System::Windows::Forms::Button ^ button11;

    private: System::Windows::Forms::Button ^ button8;

    private: System::Windows::Forms::Button ^ button7;

    private: System::Windows::Forms::Button ^ button6;

    private: System::Windows::Forms::Button ^ button3;
    private: System::Windows::Forms::Button ^ button2;
    private: System::Windows::Forms::Button ^ button1;

    private: System::Windows::Forms::Button ^ button25;

    private: System::Windows::Forms::Button ^ button24;

    private: System::Windows::Forms::Button ^ button23;

    private: System::Windows::Forms::Button ^ button22;

    private: System::Windows::Forms::Button ^ button21;

    private: System::Windows::Forms::Button ^ button20;

    private: System::Windows::Forms::Button ^ button19;

    private: System::Windows::Forms::Button ^ button18;

    private: System::Windows::Forms::Button ^ button17;

    private: System::Windows::Forms::Button ^ button16;

    private: System::Windows::Forms::Button ^ button15;

    private: System::Windows::Forms::Button ^ button14;

    private: System::Windows::Forms::Button ^ button10;

    private: System::Windows::Forms::Button ^ button9;

    private: System::Windows::Forms::Button ^ button5;

    private: System::Windows::Forms::Button ^ button4;

    private: System::Windows::Forms::Button ^ buttonFirst = nullptr;
    private: System::Windows::Forms::Button ^ buttonSecond;
    private: System::Windows::Forms::Button ^ button28;
    private: System::Windows::Forms::Button ^ button27;
    private: System::Windows::Forms::Button ^ button26;
    private: System::Windows::Forms::Panel ^ panel3;
    private: System::Windows::Forms::Button ^ button31;

    protected:

      private:
      /// <summary>
      /// Обязательная переменная конструктора.
      /// </summary>
      System::ComponentModel::Container ^ components;

    #pragma region Windows Form Designer generated code
    /// <summary>
    /// Требуемый метод для поддержки конструктора — не изменяйте 
    /// содержимое этого метода с помощью редактора кода.
    /// </summary>
    void InitializeComponent(void) {
      this -> panel1 = (gcnew System::Windows::Forms::Panel());
      this -> button28 = (gcnew System::Windows::Forms::Button());
      this -> button27 = (gcnew System::Windows::Forms::Button());
      this -> button26 = (gcnew System::Windows::Forms::Button());
      this -> panel2 = (gcnew System::Windows::Forms::Panel());
      this -> button25 = (gcnew System::Windows::Forms::Button());
      this -> button24 = (gcnew System::Windows::Forms::Button());
      this -> button23 = (gcnew System::Windows::Forms::Button());
      this -> button22 = (gcnew System::Windows::Forms::Button());
      this -> button21 = (gcnew System::Windows::Forms::Button());
      this -> button20 = (gcnew System::Windows::Forms::Button());
      this -> button19 = (gcnew System::Windows::Forms::Button());
      this -> button18 = (gcnew System::Windows::Forms::Button());
      this -> button17 = (gcnew System::Windows::Forms::Button());
      this -> button16 = (gcnew System::Windows::Forms::Button());
      this -> button15 = (gcnew System::Windows::Forms::Button());
      this -> button14 = (gcnew System::Windows::Forms::Button());
      this -> button10 = (gcnew System::Windows::Forms::Button());
      this -> button9 = (gcnew System::Windows::Forms::Button());
      this -> button5 = (gcnew System::Windows::Forms::Button());
      this -> button4 = (gcnew System::Windows::Forms::Button());
      this -> button13 = (gcnew System::Windows::Forms::Button());
      this -> button12 = (gcnew System::Windows::Forms::Button());
      this -> button11 = (gcnew System::Windows::Forms::Button());
      this -> button8 = (gcnew System::Windows::Forms::Button());
      this -> button7 = (gcnew System::Windows::Forms::Button());
      this -> button6 = (gcnew System::Windows::Forms::Button());
      this -> button3 = (gcnew System::Windows::Forms::Button());
      this -> button2 = (gcnew System::Windows::Forms::Button());
      this -> button1 = (gcnew System::Windows::Forms::Button());
      this -> panel3 = (gcnew System::Windows::Forms::Panel());
      this -> button31 = (gcnew System::Windows::Forms::Button());
      this -> panel1 -> SuspendLayout();
      this -> panel2 -> SuspendLayout();
      this -> panel3 -> SuspendLayout();
      this -> SuspendLayout();
      // 
      // panel1
      // 
      this -> panel1 -> BackColor = System::Drawing::Color::Teal;
      this -> panel1 -> Controls -> Add(this -> button28);
      this -> panel1 -> Controls -> Add(this -> button27);
      this -> panel1 -> Controls -> Add(this -> button26);
      this -> panel1 -> Location = System::Drawing::Point(12, 86);
      this -> panel1 -> Name =  "panel1";
      this -> panel1 -> Size = System::Drawing::Size(663, 100);
      this -> panel1 -> TabIndex = 0;
      this -> panel1 -> Paint += gcnew System::Windows::Forms::PaintEventHandler(this, & MyForm::panel1_Paint);
      // 
      // button28
      // 
      this -> button28 -> BackColor = System::Drawing::Color::Green;
      this -> button28 -> Location = System::Drawing::Point(519, 0);
      this -> button28 -> Name =  "button28";
      this -> button28 -> Size = System::Drawing::Size(99, 89);
      this -> button28 -> TabIndex = 24;
      this -> button28 -> UseVisualStyleBackColor = false;
      // 
      // button27
      // 
      this -> button27 -> BackColor = System::Drawing::Color::Blue;
      this -> button27 -> FlatAppearance -> BorderColor = System::Drawing::Color::Black;
      this -> button27 -> FlatAppearance -> BorderSize = 100;
      this -> button27 -> FlatAppearance -> MouseDownBackColor = System::Drawing::Color::IndianRed;
      this -> button27 -> FlatAppearance -> MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast < System::Int32 > (static_cast < System::Byte > (192)),
        static_cast < System::Int32 > (static_cast < System::Byte > (192)), static_cast < System::Int32 > (static_cast < System::Byte > (0)));
      this -> button27 -> ForeColor = System::Drawing::SystemColors::ButtonShadow;
      this -> button27 -> Location = System::Drawing::Point(288, 3);
      this -> button27 -> Name =  "button27";
      this -> button27 -> Size = System::Drawing::Size(99, 89);
      this -> button27 -> TabIndex = 24;
      this -> button27 -> UseVisualStyleBackColor = false;
      // 
      // button26
      // 
      this -> button26 -> BackColor = System::Drawing::Color::Red;
      this -> button26 -> Location = System::Drawing::Point(54, 3);
      this -> button26 -> Name = "button26";
      this -> button26 -> Size = System::Drawing::Size(99, 89);
      this -> button26 -> TabIndex = 24;
      this -> button26 -> UseVisualStyleBackColor = false;
      // 
      // panel2
      // 
      this -> panel2 -> BackColor = System::Drawing::Color::Teal;
      this -> panel2 -> Controls -> Add(this -> button25);
      this -> panel2 -> Controls -> Add(this -> button24);
      this -> panel2 -> Controls -> Add(this -> button23);
      this -> panel2 -> Controls -> Add(this -> button22);
      this -> panel2 -> Controls -> Add(this -> button21);
      this -> panel2 -> Controls -> Add(this -> button20);
      this -> panel2 -> Controls -> Add(this -> button19);
      this -> panel2 -> Controls -> Add(this -> button18);
      this -> panel2 -> Controls -> Add(this -> button17);
      this -> panel2 -> Controls -> Add(this -> button16);
      this -> panel2 -> Controls -> Add(this -> button15);
      this -> panel2 -> Controls -> Add(this -> button14);
      this -> panel2 -> Controls -> Add(this -> button10);
      this -> panel2 -> Controls -> Add(this -> button9);
      this -> panel2 -> Controls -> Add(this -> button5);
      this -> panel2 -> Controls -> Add(this -> button4);
      this -> panel2 -> Controls -> Add(this -> button13);
      this -> panel2 -> Controls -> Add(this -> button12);
      this -> panel2 -> Controls -> Add(this -> button11);
      this -> panel2 -> Controls -> Add(this -> button8);
      this -> panel2 -> Controls -> Add(this -> button7);
      this -> panel2 -> Controls -> Add(this -> button6);
      this -> panel2 -> Controls -> Add(this -> button3);
      this -> panel2 -> Controls -> Add(this -> button2);
      this -> panel2 -> Controls -> Add(this -> button1);
      this -> panel2 -> Location = System::Drawing::Point(12, 201);
      this -> panel2 -> Name = "panel2";
      this -> panel2 -> Size = System::Drawing::Size(663, 534);
      this -> panel2 -> TabIndex = 1;
      // 
      // button25
      // 
      this -> button25 -> BackColor = System::Drawing::Color::Green;
      this -> button25 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button25 -> FlatAppearance -> BorderSize = 3;
      this -> button25 -> Location = System::Drawing::Point(519, 402);
      this -> button25 -> Name =  "button25";
      this -> button25 -> Size = System::Drawing::Size(99, 89);
      this -> button25 -> TabIndex = 23;
      this -> button25 -> UseVisualStyleBackColor = false;
      this -> button25 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum25_Click);
      // 
      // button24
      // 
      this -> button24 -> BackColor = System::Drawing::Color::Black;
      this -> button24 -> Location = System::Drawing::Point(403, 402);
      this -> button24 -> Name =  "button24";
      this -> button24 -> Size = System::Drawing::Size(99, 89);
      this -> button24 -> TabIndex = 22;
      this -> button24 -> UseVisualStyleBackColor = false;
      // 
      // button23
      // 
      this -> button23 -> BackColor = System::Drawing::Color::Blue;
      this -> button23 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button23 -> FlatAppearance -> BorderSize = 3;
      this -> button23 -> Location = System::Drawing::Point(288, 402);
      this -> button23 -> Name = "button23";
      this -> button23 -> Size = System::Drawing::Size(99, 89);
      this -> button23 -> TabIndex = 21;
      this -> button23 -> UseVisualStyleBackColor = false;
      this -> button23 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum23_Click);
      // 
      // button22
      // 
      this -> button22 -> BackColor = System::Drawing::Color::Black;
      this -> button22 -> Location = System::Drawing::Point(169, 402);
      this -> button22 -> Name = "button22";
      this -> button22 -> Size = System::Drawing::Size(99, 89);
      this -> button22 -> TabIndex = 20;
      this -> button22 -> UseVisualStyleBackColor = false;
      // 
      // button21
      // 
      this -> button21 -> BackColor = System::Drawing::Color::Red;
      this -> button21 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button21 -> FlatAppearance -> BorderSize = 3;
      this -> button21 -> Location = System::Drawing::Point(54, 402);
      this -> button21 -> Name =  "button21";
      this -> button21 -> Size = System::Drawing::Size(99, 89);
      this -> button21 -> TabIndex = 19;
      this -> button21 -> UseVisualStyleBackColor = false;
      this -> button21 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum21_Click);
      // 
      // button20
      // 
      this -> button20 -> BackColor = System::Drawing::Color::Green;
      this -> button20 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button20 -> FlatAppearance -> BorderSize = 3;
      this -> button20 -> Location = System::Drawing::Point(519, 307);
      this -> button20 -> Name =  "button20";
      this -> button20 -> Size = System::Drawing::Size(99, 89);
      this -> button20 -> TabIndex = 18;
      this -> button20 -> UseVisualStyleBackColor = false;
      this -> button20 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum20_Click);
      // 
      // button19
      // 
      this -> button19 -> BackColor = System::Drawing::Color::White;
      this -> button19 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button19 -> FlatAppearance -> BorderSize = 3;
      this -> button19 -> Location = System::Drawing::Point(403, 307);
      this -> button19 -> Name =  "button19";
      this -> button19 -> Size = System::Drawing::Size(99, 89);
      this -> button19 -> TabIndex = 17;
      this -> button19 -> UseVisualStyleBackColor = false;
      this -> button19 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum19_Click);
      // 
      // button18
      // 
      this -> button18 -> BackColor = System::Drawing::Color::Blue;
      this -> button18 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button18 -> FlatAppearance -> BorderSize = 3;
      this -> button18 -> Location = System::Drawing::Point(288, 307);
      this -> button18 -> Name =  "button18";
      this -> button18 -> Size = System::Drawing::Size(99, 89);
      this -> button18 -> TabIndex = 16;
      this -> button18 -> UseVisualStyleBackColor = false;
      this -> button18 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum18_Click);
      // 
      // button17
      // 
      this -> button17 -> BackColor = System::Drawing::Color::White;
      this -> button17 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button17 -> FlatAppearance -> BorderSize = 3;
      this -> button17 -> Location = System::Drawing::Point(169, 307);
      this -> button17 -> Name =  "button17";
      this -> button17 -> Size = System::Drawing::Size(99, 89);
      this -> button17 -> TabIndex = 15;
      this -> button17 -> UseVisualStyleBackColor = false;
      this -> button17 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum17_Click);
      // 
      // button16
      // 
      this -> button16 -> BackColor = System::Drawing::Color::Red;
      this -> button16 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button16 -> FlatAppearance -> BorderSize = 3;
      this -> button16 -> Location = System::Drawing::Point(54, 307);
      this -> button16 -> Name =  "button16";
      this -> button16 -> Size = System::Drawing::Size(99, 89);
      this -> button16 -> TabIndex = 14;
      this -> button16 -> UseVisualStyleBackColor = false;
      this -> button16 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum16_Click);
      // 
      // button15
      // 
      this -> button15 -> BackColor = System::Drawing::Color::Green;
      this -> button15 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button15 -> FlatAppearance -> BorderSize = 3;
      this -> button15 -> Location = System::Drawing::Point(519, 212);
      this -> button15 -> Name =  "button15";
      this -> button15 -> Size = System::Drawing::Size(99, 89);
      this -> button15 -> TabIndex = 13;
      this -> button15 -> UseVisualStyleBackColor = false;
      this -> button15 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum15_Click);
      // 
      // button14
      // 
      this -> button14 -> BackColor = System::Drawing::Color::Black;
      this -> button14 -> Location = System::Drawing::Point(403, 212);
      this -> button14 -> Name =  "button14";
      this -> button14 -> Size = System::Drawing::Size(99, 89);
      this -> button14 -> TabIndex = 12;
      this -> button14 -> UseVisualStyleBackColor = false;
      // 
      // button10
      // 
      this -> button10 -> BackColor = System::Drawing::Color::Green;
      this -> button10 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button10 -> FlatAppearance -> BorderSize = 3;
      this -> button10 -> Location = System::Drawing::Point(519, 117);
      this -> button10 -> Name = "button10";
      this -> button10 -> Size = System::Drawing::Size(99, 89);
      this -> button10 -> TabIndex = 11;
      this -> button10 -> UseVisualStyleBackColor = false;
      this -> button10 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum10_Click);
      // 
      // button9
      // 
      this -> button9 -> BackColor = System::Drawing::Color::White;
      this -> button9 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button9 -> FlatAppearance -> BorderSize = 3;
      this -> button9 -> Location = System::Drawing::Point(403, 117);
      this -> button9 -> Name =  "button9";
      this -> button9 -> Size = System::Drawing::Size(99, 89);
      this -> button9 -> TabIndex = 10;
      this -> button9 -> UseVisualStyleBackColor = false;
      this -> button9 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum9_Click);
      // 
      // button5
      // 
      this -> button5 -> BackColor = System::Drawing::Color::Green;
      this -> button5 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button5 -> FlatAppearance -> BorderSize = 3;
      this -> button5 -> Location = System::Drawing::Point(519, 22);
      this -> button5 -> Name =  "button5";
      this -> button5 -> Size = System::Drawing::Size(99, 89);
      this -> button5 -> TabIndex = 6;
      this -> button5 -> UseVisualStyleBackColor = false;
      this -> button5 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum5_Click);
      // 
      // button4
      // 
      this -> button4 -> BackColor = System::Drawing::Color::Black;
      this -> button4 -> Location = System::Drawing::Point(403, 22);
      this -> button4 -> Name =  "button4";
      this -> button4 -> Size = System::Drawing::Size(99, 89);
      this -> button4 -> TabIndex = 9;
      this -> button4 -> UseVisualStyleBackColor = false;
      // 
      // button13
      // 
      this -> button13 -> BackColor = System::Drawing::Color::Blue;
      this -> button13 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button13 -> FlatAppearance -> BorderSize = 3;
      this -> button13 -> Location = System::Drawing::Point(288, 212);
      this -> button13 -> Name =  "button13";
      this -> button13 -> Size = System::Drawing::Size(99, 89);
      this -> button13 -> TabIndex = 8;
      this -> button13 -> UseVisualStyleBackColor = false;
      this -> button13 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum13_Click);
      // 
      // button12
      // 
      this -> button12 -> BackColor = System::Drawing::Color::Black;
      this -> button12 -> Location = System::Drawing::Point(169, 212);
      this -> button12 -> Name =  "button12";
      this -> button12 -> Size = System::Drawing::Size(99, 89);
      this -> button12 -> TabIndex = 7;
      this -> button12 -> UseVisualStyleBackColor = false;
      // 
      // button11
      // 
      this -> button11 -> BackColor = System::Drawing::Color::Red;
      this -> button11 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button11 -> FlatAppearance -> BorderSize = 3;
      this -> button11 -> Location = System::Drawing::Point(54, 212);
      this -> button11 -> Name =  "button11";
      this -> button11 -> Size = System::Drawing::Size(99, 89);
      this -> button11 -> TabIndex = 6;
      this -> button11 -> UseVisualStyleBackColor = false;
      this -> button11 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum11_Click);
      // 
      // button8
      // 
      this -> button8 -> BackColor = System::Drawing::Color::Blue;
      this -> button8 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button8 -> FlatAppearance -> BorderSize = 3;
      this -> button8 -> Location = System::Drawing::Point(288, 117);
      this -> button8 -> Name =  "button8";
      this -> button8 -> Size = System::Drawing::Size(99, 89);
      this -> button8 -> TabIndex = 5;
      this -> button8 -> UseVisualStyleBackColor = false;
      this -> button8 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum8_Click);
      // 
      // button7
      // 
      this -> button7 -> BackColor = System::Drawing::Color::White;
      this -> button7 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button7 -> FlatAppearance -> BorderSize = 3;
      this -> button7 -> Location = System::Drawing::Point(169, 117);
      this -> button7 -> Name =  "button7";
      this -> button7 -> Size = System::Drawing::Size(99, 89);
      this -> button7 -> TabIndex = 4;
      this -> button7 -> UseVisualStyleBackColor = false;
      this -> button7 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum7_Click);
      // 
      // button6
      // 
      this -> button6 -> BackColor = System::Drawing::Color::Red;
      this -> button6 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button6 -> FlatAppearance -> BorderSize = 3;
      this -> button6 -> ForeColor = System::Drawing::Color::Black;
      this -> button6 -> Location = System::Drawing::Point(54, 117);
      this -> button6 -> Name =  "button6";
      this -> button6 -> Size = System::Drawing::Size(99, 89);
      this -> button6 -> TabIndex = 3;
      this -> button6 -> UseVisualStyleBackColor = false;
      this -> button6 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum6_Click);
      // 
      // button3
      // 
      this -> button3 -> BackColor = System::Drawing::Color::Blue;
      this -> button3 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button3 -> FlatAppearance -> BorderSize = 3;
      this -> button3 -> Location = System::Drawing::Point(288, 22);
      this -> button3 -> Name = "button3";
      this -> button3 -> Size = System::Drawing::Size(99, 89);
      this -> button3 -> TabIndex = 2;
      this -> button3 -> UseVisualStyleBackColor = false;
      this -> button3 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum3_Click);
      // 
      // button2
      // 
      this -> button2 -> BackColor = System::Drawing::Color::Black;
      this -> button2 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button2 -> FlatAppearance -> BorderSize = 3;
      this -> button2 -> Location = System::Drawing::Point(168, 22);
      this -> button2 -> Name = "button2";
      this -> button2 -> Size = System::Drawing::Size(99, 89);
      this -> button2 -> TabIndex = 1;
      this -> button2 -> UseVisualStyleBackColor = false;
      // 
      // button1
      // 
      this -> button1 -> BackColor = System::Drawing::Color::Red;
      this -> button1 -> FlatAppearance -> BorderColor = System::Drawing::Color::Yellow;
      this -> button1 -> FlatAppearance -> BorderSize = 3;
      this -> button1 -> Location = System::Drawing::Point(54, 22);
      this -> button1 -> Name =  "button1";
      this -> button1 -> Size = System::Drawing::Size(99, 89);
      this -> button1 -> TabIndex = 0;
      this -> button1 -> UseVisualStyleBackColor = false;
      this -> button1 -> Click += gcnew System::EventHandler(this, & MyForm::btnNum1_Click);
      // 
      // panel3
      // 
      this -> panel3 -> BackColor = System::Drawing::Color::Teal;
      this -> panel3 -> Controls -> Add(this -> button31);
      this -> panel3 -> Location = System::Drawing::Point(15, 8);
      this -> panel3 -> Name = "panel3";
      this -> panel3 -> Size = System::Drawing::Size(663, 72);
      this -> panel3 -> TabIndex = 25;
      // 
      // button31
      // 
      this -> button31 -> BackColor = System::Drawing::Color::Blue;
      this -> button31 -> Font = (gcnew System::Drawing::Font( "Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast < System::Byte > (204)));
      this -> button31 -> Location = System::Drawing::Point(244, 12);
      this -> button31 -> Name = "button31";
      this -> button31 -> Size = System::Drawing::Size(181, 50);
      this -> button31 -> TabIndex = 24;
      this -> button31 -> Text =  "Skip puzzle";
      this -> button31 -> UseVisualStyleBackColor = false;
      this -> button31 -> Click += gcnew System::EventHandler(this, & MyForm::button31_Click);
      // 
      // MyForm
      // 
      this -> AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this -> AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this -> ClientSize = System::Drawing::Size(687, 749);
      this -> Controls -> Add(this -> panel3);
      this -> Controls -> Add(this -> panel2);
      this -> Controls -> Add(this -> panel1);
      this -> Name =  "MyForm";
      this -> StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
      this -> Text =  "PuzzleGame";
      this -> Load += gcnew System::EventHandler(this, & MyForm::MyForm_Load);
      this -> panel1 -> ResumeLayout(false);
      this -> panel2 -> ResumeLayout(false);
      this -> panel3 -> ResumeLayout(false);
      this -> ResumeLayout(false);

    }
    #pragma endregion
    private: System::Void panel1_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {}

    public: System::Void Shuffle() {
      array < Button ^ > ^ bnum = gcnew array < Button ^ > (15) {
        button1,
        button3,
        button5,
        button6,
        button8,
        button10,
        button11,
        button13,
        button15,
        button16,
        button18,
        button20,
        button21,
        button23,
        button25
      };
      button7->BackColor = Color::White;
      button9->BackColor = Color::White;
      button17->BackColor = Color::White;
      button19->BackColor = Color::White;
      Random ^ rnd = gcnew Random();
      int red = 5, blue = 5, green = 5;
      int color = 0;
      int index = 0;
      while (red > 0 || blue > 0 || green > 0) {
        color = rnd -> Next(3);
        if (color == 0 && red != 0) {
          bnum[index] -> BackColor = Color::Red;
          red--;
          index++;
        }
        if (color == 1 && blue != 0) {
          bnum[index] -> BackColor = Color::Blue;
          blue--;
          index++;
        }
        if (color == 2 && green != 0) {
          bnum[index] -> BackColor = Color::Green;
          green--;
          index++;
        }
      }

    }
    public: System::Void SolutionChecker() {
      if (button1 -> BackColor == Color::Red && button6 -> BackColor == Color::Red && button11 -> BackColor == Color::Red && button16 -> BackColor == Color::Red && button21 -> BackColor == Color::Red &&
        button3 -> BackColor == Color::Blue && button8 -> BackColor == Color::Blue && button13 -> BackColor == Color::Blue && button18 -> BackColor == Color::Blue && button23 -> BackColor == Color::Blue &&
        button5 -> BackColor == Color::Green && button10 -> BackColor == Color::Green && button15 -> BackColor == Color::Green && button20 -> BackColor == Color::Green && button25 -> BackColor == Color::Green) {
        MessageBox::Show("Победа!");

      }

    }

    public: System::Void SpotChecker(Button ^ b1) {
      b1 -> BackColor = buttonFirst -> BackColor;
      buttonFirst -> BackColor = Color::White;
      buttonFirst -> FlatStyle = FlatStyle::Standard;
      buttonFirst = nullptr;
      SolutionChecker();

    }
    public: System::Void CheckButton(Button ^ b) {
      if (buttonFirst == b) {
        buttonFirst = nullptr;
        b -> FlatStyle = FlatStyle::Standard;
        return;

      }
      if (b -> BackColor != Color::White && buttonFirst == nullptr) {
        buttonFirst = b;
        b -> FlatStyle = FlatStyle::Flat;
        return;
      }
    }
    private: System::Void btnNum1_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button1);
      if (buttonFirst == button6 && button1 -> BackColor == Color::White) {

        SpotChecker(button1);
      }
    }
    private: System::Void btnNum3_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button3);
      if (buttonFirst == button8 && button3 -> BackColor == Color::White) {

        SpotChecker(button3);
      }
    }
    private: System::Void btnNum5_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button5);
      if (buttonFirst == button10 && button5 -> BackColor == Color::White) {

        SpotChecker(button5);
      }
    }

    private: System::Void btnNum6_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button6);
      if ((buttonFirst == button7 || buttonFirst == button1 || buttonFirst == button11) && button6 -> BackColor == Color::White) {

        SpotChecker(button6);
      }

    }
    private: System::Void btnNum7_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button7);
      if ((buttonFirst == button6 || buttonFirst == button8) && button7 -> BackColor == Color::White) {

        SpotChecker(button7);
      }

    }
    private: System::Void btnNum8_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button8);
      if ((buttonFirst == button7 || buttonFirst == button9 || buttonFirst == button3 || buttonFirst == button13) && button8 -> BackColor == Color::White) {

        SpotChecker(button8);
      }
    }
    private: System::Void btnNum9_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button9);
      if ((buttonFirst == button8 || buttonFirst == button10) && button9 -> BackColor == Color::White) {

        SpotChecker(button9);
      }

    }
    private: System::Void btnNum10_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button10);
      if ((buttonFirst == button5 || buttonFirst == button9 || buttonFirst == button15) && button10 -> BackColor == Color::White) {

        SpotChecker(button10);
      }

    }
    private: System::Void btnNum11_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button11);
      if ((buttonFirst == button6 || buttonFirst == button16) && button11 -> BackColor == Color::White) {

        SpotChecker(button11);
      }

    }
    private: System::Void btnNum13_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button13);
      if ((buttonFirst == button8 || buttonFirst == button18) && button13 -> BackColor == Color::White) {

        SpotChecker(button13);
      }

    }
    private: System::Void btnNum15_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button15);
      if ((buttonFirst == button10 || buttonFirst == button20) && button15 -> BackColor == Color::White) {

        SpotChecker(button15);
      }

    }
    private: System::Void btnNum16_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button16);
      if ((buttonFirst == button11 || buttonFirst == button21 || buttonFirst == button17) && button16 -> BackColor == Color::White) {

        SpotChecker(button16);
      }

    }
    private: System::Void btnNum17_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button17);

      if ((buttonFirst == button18 || buttonFirst == button16) && button17 -> BackColor == Color::White) {

        SpotChecker(button17);
      }

    }
    private: System::Void btnNum18_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button18);
      if ((buttonFirst == button17 || buttonFirst == button19 || buttonFirst == button13 || buttonFirst == button23) && button18 -> BackColor == Color::White) {

        SpotChecker(button18);
      }

    }
    private: System::Void btnNum19_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button19);
      if ((buttonFirst == button18 || buttonFirst == button20) && button19 -> BackColor == Color::White) {

        SpotChecker(button19);
      }

    }
    private: System::Void btnNum20_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button20);
      if ((buttonFirst == button15 || buttonFirst == button25 || buttonFirst == button19) && button20 -> BackColor == Color::White) {

        SpotChecker(button20);
      }

    }
    private: System::Void btnNum21_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button21);
      if (buttonFirst == button16 && button21 -> BackColor == Color::White) {

        SpotChecker(button21);
      }

    }
    private: System::Void btnNum23_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button23);
      if (buttonFirst == button18 && button23 -> BackColor == Color::White) {

        SpotChecker(button23);
      }

    }
    private: System::Void btnNum25_Click(System::Object ^ sender, System::EventArgs ^ e) {
      CheckButton(button25);
      if (buttonFirst == button20 && button25 -> BackColor == Color::White) {

        SpotChecker(button25);
      }

    }

    private: System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {}
    private: System::Void button31_Click(System::Object ^ sender, System::EventArgs ^ e) {
      Shuffle();
    }
  };
}