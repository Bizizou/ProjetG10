#pragma once
#include "Client.h"
#include "gestion_client.h"
using namespace System::Data::SqlClient;

namespace ProjetG10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm1(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label10;

	private: System::ComponentModel::IContainer^ components;






























	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(587, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestion des clients";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 123);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Location = System::Drawing::Point(204, 501);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(1128, 500);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date du premier achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(931, 501);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Adresse Livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(711, 501);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Adresse de Facturation ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label7->Location = System::Drawing::Point(473, 501);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 18);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Date de Naissance ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(320, 501);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 18);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Prenom";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(192, 123);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1035, 313);
			this->dataGridView1->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 399);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 37);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1235, 399);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 37);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1235, 123);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 37);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Afficher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1253, 93);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 22);
			this->textBox1->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(152, 522);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 22);
			this->textBox2->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(293, 523);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 22);
			this->textBox3->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(429, 522);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(213, 22);
			this->textBox4->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1109, 523);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 22);
			this->textBox5->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(688, 522);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 22);
			this->textBox6->TabIndex = 32;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(192, 123);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1035, 313);
			this->dataGridView2->TabIndex = 33;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView2_CellContentClick);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(896, 522);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(187, 22);
			this->textBox7->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1287, 68);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 35;
			this->label2->Text = L"ID_Client";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(621, 87);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 28);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Afficher tous les clients ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(635, 622);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 37;
			this->button6->Text = L"clear all";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1313, 646);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 28);
			this->button7->TabIndex = 38;
			this->button7->Text = L"Retour";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(38) {
				L"", L"ALGER", L"ORAN", L"CONSTANTINE", L"ANNABA",
					L"BLIDA", L"BATNA", L"DJELFA", L"SETIF", L"SIDI BEL ABBES", L"BISKRA", L"TEBESSA", L"ELOUED", L"SKIKDA", L"TIARET", L"BEJAIA",
					L"TLEMCEN", L"OUARGLA", L"BECHAR", L"MOSTAGANEM", L"BORDJ BOU ARRERIDJ", L"CHLEF", L"SOUK AHRAS", L"MEDEA", L"ELEULMA", L"TOUGGOURT",
					L"GHARDAIA", L"SAIDA", L"LAGHOUAT", L"MSILA", L"JIJEL", L"RELIZANE", L"GUELMA", L"AINBEIDA", L"KHENCHELA", L"BOUSAADA", L"MASCARA",
					L"TIZI OUZOU"
			});
			this->comboBox1->Location = System::Drawing::Point(476, 576);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(503, 556);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 17);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Ville associé";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(38) {
				L"", L"ALGER", L"ORAN", L"CONSTANTINE", L"ANNABA",
					L"BLIDA", L"BATNA", L"DJELFA", L"SETIF", L"SIDI BEL ABBES", L"BISKRA", L"TEBESSA", L"ELOUED", L"SKIKDA", L"TIARET", L"BEJAIA",
					L"TLEMCEN", L"OUARGLA", L"BECHAR", L"MOSTAGANEM", L"BORDJ BOU ARRERIDJ", L"CHLEF", L"SOUK AHRAS", L"MEDEA", L"ELEULMA", L"TOUGGOURT",
					L"GHARDAIA", L"SAIDA", L"LAGHOUAT", L"MSILA", L"JIJEL", L"RELIZANE", L"GUELMA", L"AINBEIDA", L"KHENCHELA", L"BOUSAADA", L"MASCARA",
					L"TIZI OUZOU"
			});
			this->comboBox2->Location = System::Drawing::Point(716, 576);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 24);
			this->comboBox2->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(752, 556);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 17);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Ville Associé";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1415, 678);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ adresseFac = textBox6->Text;
		String^ adresseLiv = textBox7->Text;
		if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {
			if (adresseFac->StartsWith("Alger,") || adresseFac->StartsWith("Oran,") || adresseFac->StartsWith("Constantine,") || adresseFac->StartsWith("Annaba,") || adresseFac->StartsWith("Blida,") ||
				adresseFac->StartsWith("Batna,") || adresseFac->StartsWith("Djelfa,") || adresseFac->StartsWith("Setif,") || adresseFac->StartsWith("Sidi bel Abbes,") || adresseFac->StartsWith("Biskra,") ||
				adresseFac->StartsWith("Tebessa,") || adresseFac->StartsWith("El Oued,") || adresseFac->StartsWith("Skikda,") || adresseFac->StartsWith("Tiaret,") || adresseFac->StartsWith("Bejaia,") ||
				adresseFac->StartsWith("Tlemcen,") || adresseFac->StartsWith("Ouargla,") || adresseFac->StartsWith("Bechar,") || adresseFac->StartsWith("Mostaganem,") || adresseFac->StartsWith("Bordj Bou Arreridj,") ||
				adresseFac->StartsWith("Chlef,") || adresseFac->StartsWith("Souk Ahras,") || adresseFac->StartsWith("Medea,") || adresseFac->StartsWith("El Eulma,") || adresseFac->StartsWith("Touggourt,") ||
				adresseFac->StartsWith("Ghardaia,") || adresseFac->StartsWith("Saida,") || adresseFac->StartsWith("Laghouat,") || adresseFac->StartsWith("M'Sila,") || adresseFac->StartsWith("Jijel,") ||
				adresseFac->StartsWith("Relizane,") || adresseFac->StartsWith("Guelma,") || adresseFac->StartsWith("Ain Beida,") || adresseFac->StartsWith("Khenchela,") || adresseFac->StartsWith("Bousaada,") ||
				adresseFac->StartsWith("Mascara,") || adresseFac->StartsWith("Tizi Ouzou,")) {

				if (adresseLiv->StartsWith("Alger,") || adresseLiv->StartsWith("Oran,") || adresseLiv->StartsWith("Constantine,") || adresseLiv->StartsWith("Annaba,") || adresseLiv->StartsWith("Blida,") ||
					adresseLiv->StartsWith("Batna,") || adresseLiv->StartsWith("Djelfa,") || adresseLiv->StartsWith("Setif,") || adresseLiv->StartsWith("Sidi bel Abbes,") || adresseLiv->StartsWith("Biskra,") ||
					adresseLiv->StartsWith("Tebessa,") || adresseLiv->StartsWith("El Oued,") || adresseLiv->StartsWith("Skikda,") || adresseLiv->StartsWith("Tiaret,") || adresseLiv->StartsWith("Bejaia,") ||
					adresseLiv->StartsWith("Tlemcen,") || adresseLiv->StartsWith("Ouargla,") || adresseLiv->StartsWith("Bechar,") || adresseLiv->StartsWith("Mostaganem,") || adresseLiv->StartsWith("Bordj Bou Arreridj,") ||
					adresseLiv->StartsWith("Chlef,") || adresseLiv->StartsWith("Souk Ahras,") || adresseLiv->StartsWith("Medea,") || adresseLiv->StartsWith("El Eulma,") || adresseLiv->StartsWith("Touggourt,") ||
					adresseLiv->StartsWith("Ghardaia,") || adresseLiv->StartsWith("Saida,") || adresseLiv->StartsWith("Laghouat,") || adresseLiv->StartsWith("M'Sila,") || adresseLiv->StartsWith("Jijel,") ||
					adresseLiv->StartsWith("Relizane,") || adresseLiv->StartsWith("Guelma,") || adresseLiv->StartsWith("Ain Beida,") || adresseLiv->StartsWith("Khenchela,") || adresseLiv->StartsWith("Bousaada,") ||
					adresseLiv->StartsWith("Mascara,") || adresseLiv->StartsWith("Tizi Ouzou,")) {

					try {
						NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

						client->ajouter(textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, adresseFac, adresseLiv);


						MessageBox::Show("Client enregistré :'D");
					}
					catch (Exception^ ex) {

						MessageBox::Show(ex->Message);

					}
				}
				else {
					MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
				}
			}
			else {
				MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {
			String^ adresseFac = textBox6->Text;
			String^ adresseLiv = textBox7->Text;

			if (adresseFac->StartsWith("Alger,") || adresseFac->StartsWith("Oran,") || adresseFac->StartsWith("Constantine,") || adresseFac->StartsWith("Annaba,") || adresseFac->StartsWith("Blida,") ||
				adresseFac->StartsWith("Batna,") || adresseFac->StartsWith("Djelfa,") || adresseFac->StartsWith("Setif,") || adresseFac->StartsWith("Sidi bel Abbes,") || adresseFac->StartsWith("Biskra,") ||
				adresseFac->StartsWith("Tebessa,") || adresseFac->StartsWith("El Oued,") || adresseFac->StartsWith("Skikda,") || adresseFac->StartsWith("Tiaret,") || adresseFac->StartsWith("Bejaia,") ||
				adresseFac->StartsWith("Tlemcen,") || adresseFac->StartsWith("Ouargla,") || adresseFac->StartsWith("Bechar,") || adresseFac->StartsWith("Mostaganem,") || adresseFac->StartsWith("Bordj Bou Arreridj,") ||
				adresseFac->StartsWith("Chlef,") || adresseFac->StartsWith("Souk Ahras,") || adresseFac->StartsWith("Medea,") || adresseFac->StartsWith("El Eulma,") || adresseFac->StartsWith("Touggourt,") ||
				adresseFac->StartsWith("Ghardaia,") || adresseFac->StartsWith("Saida,") || adresseFac->StartsWith("Laghouat,") || adresseFac->StartsWith("M'Sila,") || adresseFac->StartsWith("Jijel,") ||
				adresseFac->StartsWith("Relizane,") || adresseFac->StartsWith("Guelma,") || adresseFac->StartsWith("Ain Beida,") || adresseFac->StartsWith("Khenchela,") || adresseFac->StartsWith("Bousaada,") ||
				adresseFac->StartsWith("Mascara,") || adresseFac->StartsWith("Tizi Ouzou,")) {

				if (adresseLiv->StartsWith("Alger,") || adresseLiv->StartsWith("Oran,") || adresseLiv->StartsWith("Constantine,") || adresseLiv->StartsWith("Annaba,") || adresseLiv->StartsWith("Blida,") ||
					adresseLiv->StartsWith("Batna,") || adresseLiv->StartsWith("Djelfa,") || adresseLiv->StartsWith("Setif,") || adresseLiv->StartsWith("Sidi bel Abbes,") || adresseLiv->StartsWith("Biskra,") ||
					adresseLiv->StartsWith("Tebessa,") || adresseLiv->StartsWith("El Oued,") || adresseLiv->StartsWith("Skikda,") || adresseLiv->StartsWith("Tiaret,") || adresseLiv->StartsWith("Bejaia,") ||
					adresseLiv->StartsWith("Tlemcen,") || adresseLiv->StartsWith("Ouargla,") || adresseLiv->StartsWith("Bechar,") || adresseLiv->StartsWith("Mostaganem,") || adresseLiv->StartsWith("Bordj Bou Arreridj,") ||
					adresseLiv->StartsWith("Chlef,") || adresseLiv->StartsWith("Souk Ahras,") || adresseLiv->StartsWith("Medea,") || adresseLiv->StartsWith("El Eulma,") || adresseLiv->StartsWith("Touggourt,") ||
					adresseLiv->StartsWith("Ghardaia,") || adresseLiv->StartsWith("Saida,") || adresseLiv->StartsWith("Laghouat,") || adresseLiv->StartsWith("M'Sila,") || adresseLiv->StartsWith("Jijel,") ||
					adresseLiv->StartsWith("Relizane,") || adresseLiv->StartsWith("Guelma,") || adresseLiv->StartsWith("Ain Beida,") || adresseLiv->StartsWith("Khenchela,") || adresseLiv->StartsWith("Bousaada,") ||
					adresseLiv->StartsWith("Mascara,") || adresseLiv->StartsWith("Tizi Ouzou,")) {

					try {
						NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

						client->modifier(Int32::Parse(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, adresseFac, adresseLiv);
						MessageBox::Show("Client modifié :'D");
						conDataBase->Close();
					}
					catch (Exception^ ex) {

						MessageBox::Show(ex->Message);

					}
				}
				else {
					MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
				}
			}
			else {
				MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs");
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox1->Text != "") {
			NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

			client->supprimer(Int32::Parse(textBox1->Text));
			MessageBox::Show("Client supprimé :'D");
		}
		else {
			MessageBox::Show("Il faut remplir l'ID d'un Client");
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "") {
			NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

			client->afficherByID(Int32::Parse(textBox1->Text), textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

			dataGridView1->Hide();
			dataGridView2->Show();
		}
		else if (textBox2->Text != "") {
			NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

			client->afficherByNom(textBox2->Text, textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

			dataGridView1->Hide();
			dataGridView2->Show();
		}
		else if (textBox3->Text != "") {
			NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

			client->afficherByPrenom(textBox2->Text, textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

			dataGridView1->Hide();
			dataGridView2->Show();
		}
		else {
			MessageBox::Show("Vous devez introduire l'ID ou le Nom ou le Prénom d'un Client");
		}

	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Clients", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		comboBox1->Text = "";
		comboBox2->Text = "";

	}

	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
