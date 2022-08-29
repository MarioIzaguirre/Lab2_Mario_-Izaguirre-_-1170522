#pragma once
#include "Calculos.h"
namespace Lab2MarioIzaguirre1170522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblLongitud;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLongitud;

	private: System::Windows::Forms::TextBox^ txtApotema;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtArea;
	private: System::Windows::Forms::TextBox^ txtPerimetro;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblLongitud = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLongitud = (gcnew System::Windows::Forms::TextBox());
			this->txtApotema = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtArea = (gcnew System::Windows::Forms::TextBox());
			this->txtPerimetro = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblLongitud
			// 
			this->lblLongitud->AutoSize = true;
			this->lblLongitud->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLongitud->Location = System::Drawing::Point(12, 9);
			this->lblLongitud->Name = L"lblLongitud";
			this->lblLongitud->Size = System::Drawing::Size(108, 24);
			this->lblLongitud->TabIndex = 0;
			this->lblLongitud->Text = L"Longitud: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apotema:";
			// 
			// txtLongitud
			// 
			this->txtLongitud->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLongitud->Location = System::Drawing::Point(178, 6);
			this->txtLongitud->Name = L"txtLongitud";
			this->txtLongitud->Size = System::Drawing::Size(100, 34);
			this->txtLongitud->TabIndex = 2;
			// 
			// txtApotema
			// 
			this->txtApotema->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApotema->Location = System::Drawing::Point(178, 64);
			this->txtApotema->Name = L"txtApotema";
			this->txtApotema->Size = System::Drawing::Size(100, 34);
			this->txtApotema->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triangulo ", L"Cuadrado ", L"Pentagono", L"Hexagono",
					L"Heptagono", L"Octagono", L"Eneagono", L"Decagono"
			});
			this->comboBox1->Location = System::Drawing::Point(208, 128);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 32);
			this->comboBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Escoge una opción:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(86, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 77);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"El perimetro es: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"El Area es:";
			// 
			// txtArea
			// 
			this->txtArea->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArea->Location = System::Drawing::Point(178, 285);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(100, 34);
			this->txtArea->TabIndex = 9;
			// 
			// txtPerimetro
			// 
			this->txtPerimetro->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPerimetro->Location = System::Drawing::Point(193, 333);
			this->txtPerimetro->Name = L"txtPerimetro";
			this->txtPerimetro->Size = System::Drawing::Size(100, 34);
			this->txtPerimetro->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 399);
			this->Controls->Add(this->txtPerimetro);
			this->Controls->Add(this->txtArea);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtApotema);
			this->Controls->Add(this->txtLongitud);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblLongitud);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		figuras nuevo;
		nuevo.lado = (comboBox1->SelectedIndex + 3);
		nuevo.longitud = Convert::ToDouble(txtLongitud->Text);
		if (comboBox1->SelectedIndex > 1) {
			nuevo.apotema = Convert::ToDouble(txtApotema->Text);
		}
		txtPerimetro->Text = Convert::ToString(nuevo.calcPerimetro());
		txtArea->Text = Convert::ToString(nuevo.calcArea());
	}
};
}
