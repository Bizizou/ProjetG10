#pragma once
using namespace System::Data::SqlClient;

namespace ProjetG10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm4(Form^ r)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label12;











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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 314);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(937, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(937, 314);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 404);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nom du client";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(410, 478);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(114, 20);
			this->textBox7->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(444, 71);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Afficher toutes les commandes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(144, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(776, 254);
			this->dataGridView1->TabIndex = 18;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(144, 100);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(776, 254);
			this->dataGridView2->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(292, 404);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(811, 443);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(292, 478);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(101, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(167, 478);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(291, 388);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Prenom du client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(814, 381);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nom de l\'article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(293, 462);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Date de livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(170, 462);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date d\'emission";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(811, 397);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(835, 427);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Quantité ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(417, 462);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Date de paiement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(411, 388);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Moyen de paiement";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(492, 383);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(410, 404);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(114, 20);
			this->textBox8->TabIndex = 27;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(939, 74);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(957, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Reference";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(651, 527);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(677, 511);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Reference";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(863, 527);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(757, 527);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 35;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(982, 524);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Retour";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(545, 527);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 38;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(439, 526);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 39;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(330, 526);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 40;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(224, 526);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 41;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(782, 473);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 23);
			this->button6->TabIndex = 42;
			this->button6->Text = L"Ajouter un autre article";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(118, 527);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 43;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(377, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(334, 31);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Gestion des commandes";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1061, 551);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox10->Hide();
		label11->Hide();
		textBox12->Hide();
		textBox13->Hide();
		textBox14->Hide();
		textBox15->Hide();
		textBox16->Hide();
		textBox17->Hide();
		textBox18->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);


		String^ nom_client = textBox1->Text;
		String^ prenom_client = textBox2->Text;
		int quantite = Int32::Parse(textBox3->Text);
		String^ nom_article = textBox4->Text;
		String^ date_livraison = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ date_emission = Convert::ToDateTime(textBox6->Text).ToString("yyyy-MM-dd");
		String^ date_paiement = Convert::ToDateTime(textBox7->Text).ToString("yyyy-MM-dd");
		String^ moyen_paiement = textBox8->Text;
		String^ date_emission_sansannee = date_emission->Substring(5, 5);

		

		//////////////////// recuperer la ville du client //////////////////////

		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT Adresse_de_livraison FROM Clients WHERE Nom = '" + nom_client + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader = cmdDataBase1->ExecuteReader();


		while (myReader->Read()) {

			textBox12->Text = myReader->GetString(0);

		}

		myReader->Close();
		condatabase->Close();


		String^ adresse = textBox12->Text;

		////////////////////////////       Creation de la reference pour la commande       ///////////////////////////////


		SqlConnection^ condatabase1 = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Reference_commande,12,LEN(Reference_commande) - 11) AS int)),0) FROM Commandes", condatabase1);
		condatabase1->Open();
		SqlDataReader^ myReader1 = cmdDataBase2->ExecuteReader();

		while (myReader1->Read()) {
			textBox13->Text = Convert::ToString(myReader1->GetInt32(0));
		}
		myReader1->Close();

		///////////////////     Chiffre incrémentiel pour la reference commande    ///////////////////////////
		String^ Inc = textBox13->Text;
		if (textBox13->Text != "") {
			String^ sInc = Inc;
			int iInt = Int32::Parse(sInc);

			iInt++;

			Inc = Convert::ToString(iInt);
		}
		else {
			Inc = "1";
		}

		textBox13->Text = Inc;

		//////////////////// récuperer la date  //////////////////////

		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Date_de_naissance FROM Clients WHERE Nom = '" + nom_client + "' ", condatabase);
		SqlCommand^ cmdDataBase4 = gcnew SqlCommand("SELECT premier_achat FROM Clients WHERE Nom = '" + nom_client + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader5 = cmdDataBase3->ExecuteReader();
		


		while (myReader5->Read()) {


			textBox14->Text = Convert::ToString(myReader5->GetDateTime(0).ToString("yyyy-MM-dd"));

		}


		
		myReader5->Close();
		condatabase->Close();

		condatabase->Open();
		SqlDataReader^ myReader6 = cmdDataBase4->ExecuteReader();
		while (myReader6->Read()) {


			textBox16->Text = Convert::ToString(myReader6->GetDateTime(0).ToString("yyyy-MM-dd"));

		}

		myReader6->Close();
		condatabase->Close();
		

		String^ date = Convert::ToDateTime(textBox14->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox16->Text).ToString("yyyy-MM-dd");

		///////////////////////////////////////////////////////////////////////////
		
		String^ reference = nom_client->Substring(0, 2) + prenom_client->Substring(0, 2) + date_livraison->Substring(0, 4) + adresse->Substring(0, 3) + Inc;
		textBox10->Text = reference;
		String^ date_naissance_sansannee = date->Substring(5, 5);
		textBox15->Text = date_naissance_sansannee;
		String^ date_achat_sansannee = date2->Substring(5, 5);
		textBox17->Text = date_achat_sansannee;
		textBox18->Text = date_emission_sansannee;

		condatabase->Open();
		
		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Commandes (Reference_commande, Remise_10, Remise_5,Quantite_article, Date_de_livraison, Date_d_emission, Date_de_paiement,Moyen_de_paiement, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Numero_client) VALUES('"+reference+"', (SELECT Remise_10 FROM Remises, Clients WHERE '" + date_naissance_sansannee + "'= '"+date_emission_sansannee+"' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '"+prenom_client+"' ), (SELECT Remise_5 FROM Remises, Clients WHERE '" + date_achat_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '" + prenom_client + "' ) ,(SELECT SUM(Quantite) FROM Contenir WHERE Reference_commande = '" + reference + "' ), '"+date_livraison+"','"+date_emission+"', '"+date_paiement+"', '"+moyen_paiement+"',(SELECT SUM(Montant_HT) FROM Contenir WHERE Reference_commande = '" + reference + "'),(SELECT SUM(Montant_TVA) FROM Contenir WHERE Reference_commande = '" + reference + "'),(SELECT SUM(Montant_TTC) FROM Contenir WHERE Reference_commande = '" + reference + "'),(SELECT Numero_client FROM Clients WHERE Nom = '" + nom_client + "' AND Prenom = '" + prenom_client + "'));", condatabase);
		SqlDataReader^ myReader2 = cmdDataBase->ExecuteReader();
		myReader2->Close();

		SqlCommand^ cmdDataBase8 = gcnew SqlCommand("INSERT INTO Contenir (Reference_commande, Reference, Quantite, Montant_HT, Montant_TVA, Montant_TTC) VALUES('"+reference+"', (SELECT [Article].Reference FROM Article WHERE designation = '"+nom_article+"' ), '"+quantite+"', (SELECT ([Article].Montant_HT * '"+quantite+"') FROM Article WHERE designation = '"+nom_article+"'),(SELECT ([Article].Montant_TVA * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'), (SELECT ([Article].Montant_TTC * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "') );", condatabase);
		SqlDataReader^ myReader8 = cmdDataBase8->ExecuteReader();
		myReader8->Close();

		SqlCommand^ cmdDataBase9 = gcnew SqlCommand("UPDATE Commandes SET Quantite_article = (SELECT SUM(Quantite)FROM Contenir WHERE Reference_commande = '"+reference+"'), Date_de_livraison = '"+date_livraison+"', Date_d_emission = '"+date_emission+"', Date_de_paiement = '"+date_paiement+"', Moyen_de_paiement = '"+moyen_paiement+"', Montant_total_HT = (SELECT SUM(Montant_HT) FROM Contenir WHERE Reference_commande = '"+reference+"'),Montant_total_TVA = (SELECT SUM(Montant_TVA) FROM Contenir WHERE Reference_commande = '" + reference + "'),Montant_total_TTC = (SELECT SUM(Montant_TTC) FROM Contenir WHERE Reference_commande = '" + reference + "') ,Remise_10 = (SELECT Remise_10 FROM Remises, Clients WHERE '" + date_naissance_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '" + prenom_client + "' ) ,Remise_5= (SELECT Remise_5 FROM Remises, Clients WHERE '" + date_achat_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '" + prenom_client + "' ) WHERE Reference_commande = '"+reference+"' ", condatabase);
		SqlDataReader^ myReader9 = cmdDataBase9->ExecuteReader();
		myReader9->Close();
		


		try {
			
			
			MessageBox::Show("Commande enregistré avec succés, vous pouvez ajouter plusieurs articles sur la meme commande en appuyant sur le bouton 'Ajouter d'autre article'");

		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);


		String^ reference = textBox10->Text;
		String^ nom = textBox1->Text;
		String^ prenom = textBox2->Text;
		String^ nom_article = textBox4->Text;
		String^ date_emission = textBox6->Text;
		String^ date_livraison = textBox5->Text;
		String^ date_paiement = textBox7->Text;
		int quantite = Int32::Parse(textBox3->Text);
		String^ moyen_paiement = textBox8->Text;
		String^ date_achat_sansannee = textBox17->Text;
		String^ date_naissance_sansannee = textBox15->Text;
		String^ date_emission_sansannee = textBox18->Text;
		conDataBase->Open();

		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Contenir SET Reference = (SELECT Reference FROM Article WHERE designation = '" + nom_article + "') , Quantite = '" + quantite + "', Montant_HT = (SELECT ([Article].Montant_HT * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),Montant_TVA = (SELECT ([Article].Montant_TVA * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "') ,Montant_TTC = (SELECT ([Article].Montant_TTC * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "') FROM Commandes WHERE [Contenir].Reference_commande = '" + reference + "' AND [Contenir].Reference = (SELECT Reference FROM Article WHERE designation = '" + nom_article + "' )  ", conDataBase);
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

		myReader1->Close();


		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commandes SET Quantite_article = (SELECT SUM(Quantite) FROM Contenir WHERE [Contenir].Reference_commande = '" + reference + "') , Date_de_livraison = '" + date_livraison + "', Date_d_emission = '" + date_emission + "',Date_de_paiement = '" + date_paiement + "',Moyen_de_paiement = '" + moyen_paiement + "',Montant_total_HT = (SELECT SUM(Montant_HT) FROM Contenir WHERE [Contenir].Reference_commande = '" + reference + "'),Montant_total_TVA = (SELECT SUM(Montant_TVA) FROM Contenir WHERE [Contenir].Reference_commande = '" + reference + "'),Montant_total_TTC = (SELECT SUM(Montant_TTC) FROM Contenir WHERE [Contenir].Reference_commande = '" + reference + "'),Remise_10 = (SELECT Remise_10 FROM Remises, Clients WHERE '" + date_naissance_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom + "' AND [Clients].Prenom = '" + prenom + "' ),Remise_5 = (SELECT Remise_5 FROM Remises, Clients WHERE '" + date_naissance_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom + "' AND [Clients].Prenom = '" + prenom + "' ),Numero_client = (SELECT Numero_client FROM Clients WHERE Nom = '" + nom + "' AND Prenom = '" + prenom + "') WHERE [Commandes].Reference_commande = '" + reference + "' ", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		myReader->Close();




		conDataBase->Close();
		MessageBox::Show("La commande a été modifié avec succès");
	}
			
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commandes", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView1->DataSource = bindingSource2;
		
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reference = textBox9->Text;
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase2 = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase3 = gcnew SqlConnection(constring);

		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commandes WHERE Reference_commande = '" + reference + "' ", conDataBase);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT Nom, Prenom FROM Clients, Commandes WHERE [Clients].Numero_client = [Commandes].Numero_client ", conDataBase1);
		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT designation FROM Article, Contenir WHERE [Article].Reference = [Contenir].Reference ", conDataBase2);
		//SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT (Montant_total_TTC / Montant_TTC) FROM Commandes, Article, Contenir WHERE [Article].Reference = [Contenir].Reference   ", conDataBase3);
		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Quantite_article FROM Commandes, Article, Contenir WHERE [Article].Reference = '"+reference+"'  ", conDataBase3);

		conDataBase->Open();
		conDataBase1->Open();
		conDataBase2->Open();
		conDataBase3->Open();

		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();
		SqlDataReader^ myReader2 = cmdDataBase2->ExecuteReader();
		SqlDataReader^ myReader3 = cmdDataBase3->ExecuteReader();
		dataGridView1->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {

			textBox5->Text = Convert::ToString(myReader->GetDateTime(4).ToString("dd-MM-yyyy"));
			textBox6->Text = Convert::ToString(myReader->GetDateTime(5).ToString("dd-MM-yyyy"));
			textBox7->Text = Convert::ToString(myReader->GetDateTime(6).ToString("dd-MM-yyyy"));
			textBox8->Text = myReader->GetString(7);
			textBox10->Text = myReader->GetString(0);


		}
		myReader->Close();

		while (myReader1->Read()) {

			textBox1->Text = myReader1->GetString(0);
			textBox2->Text = myReader1->GetString(1);
		}
		myReader1->Close();

		while (myReader2->Read()) {

			textBox4->Text = myReader2->GetString(0);
			
		}
		myReader2->Close();

		while (myReader3->Read()) {

			textBox3->Text = Convert::ToString(myReader3->GetDouble(0));

		}
		myReader3->Close();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commandes WHERE Reference_commande = '" + reference + "' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView2->DataSource = bindingSource2;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		conDataBase->Open();

		String^ reference = textBox9->Text;
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("DELETE FROM Contenir WHERE Reference_commande = '" + reference + "' ", conDataBase);
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

		myReader1->Close();
		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("DELETE FROM Commandes WHERE Reference_commande = '" + reference + "' ", conDataBase);
		SqlDataReader^ myReader2 = cmdDataBase2->ExecuteReader();

		myReader2->Close();

		


		MessageBox::Show("La commande a été supprimée avec succés");
		conDataBase->Close();

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);
		SqlConnection^ condatabase1 = gcnew SqlConnection(constring);


		String^ nom = textBox1->Text;
		String^ prenom = textBox2->Text;
		String^ nom_article = textBox4->Text;
		String^ date_emission = textBox6->Text;
		String^ date_livraison = textBox5->Text;
		String^ date_paiement = textBox7->Text;
		String^ quantite = textBox3->Text;
		String^ moyen_paiement = textBox8->Text;

		condatabase->Open();

		String^ reference = textBox10->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Contenir (Reference_commande, Reference, Quantite, Montant_HT, Montant_TVA, Montant_TTC) VALUES('" + reference + "', (SELECT [Article].Reference FROM Article WHERE designation = '" + nom_article + "' ), '" + quantite + "', (SELECT ([Article].Montant_HT * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),(SELECT ([Article].Montant_TVA * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'), (SELECT ([Article].Montant_TTC * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "') );", condatabase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		myReader->Close();
		
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Commandes SET Quantite_article = (SELECT SUM(Quantite)FROM Contenir WHERE Reference_commande = '" + reference + "'), Montant_total_HT = (SELECT SUM(Montant_HT) FROM Contenir WHERE Reference_commande = '" + reference + "'),Montant_total_TVA = (SELECT SUM(Montant_TVA) FROM Contenir WHERE Reference_commande = '" + reference + "'),Montant_total_TTC = (SELECT SUM(Montant_TTC) FROM Contenir WHERE Reference_commande = '" + reference + "') WHERE Reference_commande = '" + reference + "' ", condatabase);
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

		myReader1->Close();

		condatabase->Close();

		MessageBox::Show("Un article a été ajouté");
	}
};
}

