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
	/// Description r�sum�e de MyForm4
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
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;











	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
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
			this->textBox1->Location = System::Drawing::Point(96, 426);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 410);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nom du client";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(732, 426);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(444, 71);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(177, 23);
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
			this->textBox2->Location = System::Drawing::Point(202, 426);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(308, 426);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(520, 426);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(626, 426);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(216, 410);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Prenom du client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(424, 410);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nom de l\'article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(534, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Date de livraison";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(645, 410);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date d\'emission";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(414, 426);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(334, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Quantit� ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(741, 410);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Date de paiement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(838, 410);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Moyen de paiement";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(873, 378);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(838, 426);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
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
			this->label10->Location = System::Drawing::Point(962, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Reference";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(414, 490);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 30;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(520, 490);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(444, 469);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Referencetest";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(550, 469);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Remise";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(919, 12);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(770, 12);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 35;
			// 
			// button7
			// 
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
			this->textBox14->Location = System::Drawing::Point(604, 12);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 38;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(459, 12);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 39;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(337, 12);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 40;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(219, 12);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 41;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1061, 551);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
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
		textBox12->Hide();
		textBox13->Hide();
		textBox14->Hide();
		textBox15->Hide();
		textBox16->Hide();
		textBox17->Hide();
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

		///////////////////     Chiffre incr�mentiel pour la reference commande    ///////////////////////////
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

		//////////////////// r�cuperer la date  //////////////////////

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

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Commandes (Reference_commande, Remise_10, Remise_5, Date_de_livraison, Date_d_emission, Date_de_paiement,Moyen_de_paiement, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Numero_client) VALUES('"+reference+"', (SELECT Remise1 FROM Remises, Clients WHERE '" + date_naissance_sansannee + "'= '"+date_emission_sansannee+"' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '"+prenom_client+"' ), (SELECT Remise2 FROM Remises, Clients WHERE '" + date_achat_sansannee + "'= '" + date_emission_sansannee + "' AND [Clients].Nom = '" + nom_client + "' AND [Clients].Prenom = '" + prenom_client + "' ) , '"+date_livraison+"','"+date_emission+"', '"+date_paiement+"', '"+moyen_paiement+"',(SELECT (Montant_HT * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),(SELECT (Montant_TVA * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),(SELECT (Montant_TTC * '" + quantite + "') FROM Article WHERE designation = '" + nom_article + "'),(SELECT Numero_client FROM Clients WHERE Nom = '" + nom_client + "' AND Prenom = '" + prenom_client + "'));", condatabase);
		SqlDataReader^ myReader2;
		try {
			condatabase->Open();
			myReader2 = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande enregistr� avec succ�s");
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ nom_client = textBox1->Text;
		String^ prenom_client = textBox2->Text;
		int quantite = Int32::Parse(textBox3->Text);
		String^ nom_article = textBox4->Text;
		String^ date_livraison = Convert::ToDateTime(textBox5->Text).ToString("dd-MM-yyyy");
		String^ date_emission = Convert::ToDateTime(textBox6->Text).ToString("dd-MM-yyyy");
		String^ date_paiement = Convert::ToDateTime(textBox7->Text).ToString("dd-MM-yyyy");
		String^ moyen_paiement = textBox8->Text;
		String^ reference = textBox10->Text;
		String^ remise = textBox11->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commandes SET Date_de_livraison = '" +date_livraison + "', Date_d_emission = '"+date_emission+"', Date_de_paiement = '"+date_paiement+"' WHERE Reference_commande = '" + reference + "'; ", conDataBase);
		SqlDataReader^ myReader;
		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande modifi� avec succ�s");
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
		String^ reference = textBox9->Text;
		String^ constring = "Data Source=(local);Initial Catalog=GROUPE10BDD;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase2 = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase3 = gcnew SqlConnection(constring);

		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commandes WHERE Reference_commande = '" + reference + "' ", conDataBase);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT Nom, Prenom FROM Clients, Commandes WHERE [Clients].Numero_client = [Commandes].Numero_client ", conDataBase1);
		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT designation FROM Article, Contenir WHERE [Article].ID_Article = [Contenir].ID_Article ", conDataBase2);
		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT (Montant_total_TTC / Montant_TTC) FROM Commandes, Article, Contenir WHERE [Article].ID_Article = [Contenir].ID_Article   ", conDataBase3);

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

			textBox5->Text = Convert::ToString(myReader->GetDateTime(3).ToString("dd-MM-yyyy"));
			textBox6->Text = Convert::ToString(myReader->GetDateTime(4).ToString("dd-MM-yyyy"));
			textBox7->Text = Convert::ToString(myReader->GetDateTime(5).ToString("dd-MM-yyyy"));
			textBox8->Text = myReader->GetString(6);
			textBox10->Text = myReader->GetString(0);
			//textBox11->Text = Convert::ToString(myReader->GetDouble(1));

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


		String^ reference = textBox9->Text;
		SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Commandes WHERE Reference_commande = '" + reference + "' ", conDataBase);

		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Commande supprim� avec succ�s");
		conDataBase->Close();

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}

};
}

