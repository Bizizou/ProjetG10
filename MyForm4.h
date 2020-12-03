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
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
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
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 123);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 386);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1249, 123);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1249, 386);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(103, 560);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 540);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nom du client";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(927, 560);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(132, 22);
			this->textBox7->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(579, 48);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 28);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Afficher toutes les commandes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(192, 123);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1035, 313);
			this->dataGridView1->TabIndex = 18;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(192, 123);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1035, 313);
			this->dataGridView2->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 560);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(361, 560);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(644, 560);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(785, 560);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 22);
			this->textBox6->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(239, 540);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Prenom du client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(516, 540);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nom de l\'article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(663, 540);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 17);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Date de livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(811, 540);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date d\'emission";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(503, 560);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(396, 540);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 17);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Quantité ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(939, 540);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 17);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Date de paiement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1068, 540);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Moyen de paiement";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1115, 501);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1068, 560);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(132, 22);
			this->textBox8->TabIndex = 27;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1252, 82);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(132, 22);
			this->textBox9->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1283, 63);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 17);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Reference";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(503, 639);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(132, 22);
			this->textBox10->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(644, 639);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(132, 22);
			this->textBox11->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(543, 613);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 17);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Referencetest";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(684, 613);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 17);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Remise";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1415, 678);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "" && textBox5->Text == "" && textBox6->Text == "") {
			MessageBox::Show("vous devez remplir tous les champs");
		}
		else {
			String^ nom_client = textBox1->Text;
			String^ prenom_client = textBox2->Text;
			int quantite = Int32::Parse(textBox3->Text);
			String^ nom_article = textBox4->Text;
			String^ date_livraison = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
			String^ date_emission = Convert::ToDateTime(textBox6->Text).ToString("yyyy-MM-dd");
			String^ date_paiement = Convert::ToDateTime(textBox7->Text).ToString("yyyy-MM-dd");
			String^ moyen_paiement = textBox8->Text;
			String^ reference = textBox10->Text;
			String^ remise = textBox11->Text;
		
			


			SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Commandes (Reference_commande, Remise, Date_de_livraison, Date_d_emission, Date_de_paiement,Moyen_de_paiement, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Numero_client) VALUES('"+reference+"', '"+remise+"', '"+date_livraison+"', '"+date_emission+"', '"+date_paiement+"','"+moyen_paiement+"',(SELECT (Montant_HT * '"+quantite+"') FROM Article WHERE designation = '"+nom_article+"'), (SELECT (Montant_TVA * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),(SELECT (Montant_TTC * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'), (SELECT Numero_client FROM Clients WHERE Nom = '" + nom_client + "' AND Prenom = '" + prenom_client + "')  ); ", conDataBase);
			SqlDataReader^ myReader;
			try {

				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("commande enregistré avec succés");
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ nom_client = textBox1->Text;
		String^ prenom_client = textBox2->Text;
		int quantite = Int32::Parse(textBox3->Text);
		String^ nom_article = textBox4->Text;
		String^ date_livraison = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ date_emission = Convert::ToDateTime(textBox6->Text).ToString("yyyy-MM-dd");
		String^ date_paiement = Convert::ToDateTime(textBox7->Text).ToString("yyyy-MM-dd");
		String^ moyen_paiement = textBox8->Text;
		String^ reference = textBox10->Text;
		String^ remise = textBox11->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commandes SET Remise = " + remise + ", Date_de_livraison = '" +date_livraison + "', Date_d_emission = '"+date_emission+"', Date_de_paiement = '""' WHERE Reference_commande = '" + reference + "'; ", conDataBase);
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
}
};
}

