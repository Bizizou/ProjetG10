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
	/// Description résumée de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm3(Form^ r)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::ComponentModel::IContainer^ components;

	protected:




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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 324);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 30);
			this->button4->TabIndex = 44;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(938, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 30);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(938, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 30);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleName = L"datagridview2";
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(144, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(776, 254);
			this->dataGridView1->TabIndex = 41;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(478, 402);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 17);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Nom de l\'article";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label7->Location = System::Drawing::Point(216, 457);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 17);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Montant en TVA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(77, 457);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 17);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Montant en HT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(643, 402);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 17);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Quantite de l\'article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(359, 457);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 17);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Montant en TTC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Info;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Location = System::Drawing::Point(283, 402);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 17);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Référence de l\'article";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(458, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 25);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Gestion de l\'article";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Ajouter ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Location = System::Drawing::Point(505, 457);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 17);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Nature de l\'article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Info;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label9->Location = System::Drawing::Point(650, 457);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 17);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Couleur de l\'article";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Info;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label10->Location = System::Drawing::Point(820, 457);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(196, 17);
			this->label10->TabIndex = 49;
			this->label10->Text = L"Seuil de reapprovisionnement";
			// 
			// button5
			// 
			this->button5->AccessibleName = L"tesxtBox10";
			this->button5->Location = System::Drawing::Point(463, 71);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 23);
			this->button5->TabIndex = 51;
			this->button5->Text = L"Afficher la liste des articles";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AccessibleName = L"datagridview1";
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(144, 100);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(776, 254);
			this->dataGridView2->TabIndex = 52;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(273, 422);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 53;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(466, 422);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 20);
			this->textBox2->TabIndex = 54;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(635, 422);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 55;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(58, 477);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(131, 20);
			this->textBox4->TabIndex = 56;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(205, 477);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(131, 20);
			this->textBox5->TabIndex = 57;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(352, 477);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(131, 20);
			this->textBox6->TabIndex = 58;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(499, 477);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(131, 20);
			this->textBox7->TabIndex = 59;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(647, 477);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(131, 20);
			this->textBox8->TabIndex = 60;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(816, 477);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(204, 20);
			this->textBox9->TabIndex = 61;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(490, 516);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 62;
			this->button6->Text = L"clear all";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(984, 525);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 63;
			this->button7->Text = L"Retour";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::button7_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1061, 551);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
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
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=G10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "" && textBox5->Text == "" && textBox6->Text == "") {
			MessageBox::Show("vous devez remplir tous les champs");
		}
		else {
			String^ reference = textBox1->Text;
			String^ designation = textBox2->Text;
			int quantite = Int32::Parse(textBox3->Text);
			double montant_ht = double::Parse(textBox4->Text);
			double montant_tva = double::Parse(textBox5->Text);
			double montant_ttc = double::Parse(textBox6->Text);
			String^ nature_article = textBox7->Text;
			String^ couleur_article = textBox8->Text;
			int seuil = Int32::Parse(textBox9->Text);


			SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Article (Reference, designation, Quantite, Montant_HT, Montant_TVA, Montant_TTC, Nature_de_l_article, Couleur_de_l_article,Seuil_de_reapprovisionnement) VALUES('" + reference + "', '" + designation + "', " + quantite + ", " + montant_ht + ", " + montant_tva + ", " + montant_ttc + ", '" + nature_article + "', '" + couleur_article + "', '" + seuil + "'); ", conDataBase);
			SqlDataReader^ myReader;
			try {

				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Article enregistré avec succés");
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=G10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reference = textBox1->Text;
		String^ constring = "Data Source=(local);Initial Catalog=G10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Article WHERE Reference = '"+reference+"' ", conDataBase);
		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		dataGridView1->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {
			
			textBox2->Text = myReader->GetString(2);
			textBox3->Text = Convert::ToString(myReader->GetInt32(3));
			textBox4->Text = Convert::ToString(myReader->GetDouble(4));
			textBox5->Text = Convert::ToString(myReader->GetDouble(5));
			textBox6->Text = Convert::ToString(myReader->GetDouble(6));
			textBox7->Text = myReader->GetString(7);
			textBox8->Text = myReader->GetString(8);
			textBox9->Text = myReader->GetString(9);
		}

		myReader->Close();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article WHERE Reference = '" + reference + "' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView2->DataSource = bindingSource2;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=G10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ reference = textBox1->Text;
		String^ designation = textBox2->Text;
		int quantite = Int32::Parse(textBox3->Text);
		double montant_ht = double::Parse(textBox4->Text);
		double montant_tva = double::Parse(textBox5->Text);
		double montant_ttc = double::Parse(textBox6->Text);
		String^ nature_article = textBox7->Text;
		String^ couleur_article = textBox8->Text;
		int seuil = Int32::Parse(textBox9->Text);

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Article SET designation = '" + designation + "',  Quantite = " + quantite + ", Montant_HT = " + montant_ht + ", Montant_TVA = " + montant_tva + ", Montant_TTC = " + montant_ttc + ", Seuil_de_reapprovisionnement = " + seuil + ", Nature_de_l_article = '" + nature_article + "', Couleur_de_l_article = '" + couleur_article + "' WHERE Reference = '" + reference + "' ", conDataBase);
		SqlDataReader^ myReader;
		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Article modifié avec succés");
			conDataBase->Close();
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=G10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);


		String^ reference = textBox1->Text;
		SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Article WHERE Reference = '" + reference + "' ", conDataBase);

		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Article supprimé avec succés");
		conDataBase->Close();
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
	};
}
