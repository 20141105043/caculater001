
// caculater001Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "caculater001.h"
#include "caculater001Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Ccaculater001Dlg �Ի���




Ccaculater001Dlg::Ccaculater001Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Ccaculater001Dlg::IDD, pParent)
	, m_string(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Ccaculater001Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_string);
}

BEGIN_MESSAGE_MAP(Ccaculater001Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	
	ON_BN_CLICKED(IDC_1, &Ccaculater001Dlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_2, &Ccaculater001Dlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &Ccaculater001Dlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &Ccaculater001Dlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_5, &Ccaculater001Dlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_6, &Ccaculater001Dlg::OnBnClicked6)
	ON_BN_CLICKED(IDC_7, &Ccaculater001Dlg::OnBnClicked7)
	ON_BN_CLICKED(IDC_8, &Ccaculater001Dlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_9, &Ccaculater001Dlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_0, &Ccaculater001Dlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_ADD, &Ccaculater001Dlg::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_SUB, &Ccaculater001Dlg::OnBnClickedSub)
	ON_BN_CLICKED(IDC_MUL, &Ccaculater001Dlg::OnBnClickedMul)
	ON_BN_CLICKED(IDC_DIV, &Ccaculater001Dlg::OnBnClickedDiv)
	ON_BN_CLICKED(IDC_Point, &Ccaculater001Dlg::OnBnClickedPoint)
	ON_BN_CLICKED(IDC_Backspace, &Ccaculater001Dlg::OnBnClickedBackspace)
    ON_BN_CLICKED(IDC_Clear, &Ccaculater001Dlg::OnClickedClear)
	ON_BN_CLICKED(IDC_Value, &Ccaculater001Dlg::OnClickedValue)
END_MESSAGE_MAP()


// Ccaculater001Dlg ��Ϣ�������

BOOL Ccaculater001Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Ccaculater001Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Ccaculater001Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Ccaculater001Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void Ccaculater001Dlg::OnBnClicked1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"1";
	UpdateData(false);
}   

void Ccaculater001Dlg::OnBnClicked2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"2";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"3";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"4";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"5";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"6";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"7";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"8";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"9";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClicked0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string=m_string+L"0";
	UpdateData(false);
}

void Ccaculater001Dlg::OnBnClickedAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SaveValue();
	flag=0;
}

void Ccaculater001Dlg::OnBnClickedSub()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
    SaveValue();
	flag=1;
}

void Ccaculater001Dlg::OnBnClickedMul()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SaveValue();
	flag=2;
}

void Ccaculater001Dlg::OnBnClickedDiv()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SaveValue();
	flag=3;
}

void Ccaculater001Dlg::OnBnClickedPoint()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if(-1==m_string.Find(L"."));
	m_string=m_string+L".";
	UpdateData(false);
}


void Ccaculater001Dlg::OnBnClickedBackspace()
{
	// TODO: �ڴ���ӿؼ�֪ͨ���������� 
    if(!m_string.IsEmpty()) 
    { 
        m_string=m_string.Left(m_string.GetLength()-1); 
    } 
    UpdateData(false);
}




void Ccaculater001Dlg::OnClickedClear()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_string="";
	m_num1=0.0f;
	m_num2=0.0f;
	flag=0;
	UpdateData(false);
}


void Ccaculater001Dlg::OnClickedValue()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculator(); 
}
void Ccaculater001Dlg::SaveValue()  
{  
    UpdateData(true);  
    m_num1 = _ttof(m_string);  
    m_string = "";  
    UpdateData(false);  
} 
void Ccaculater001Dlg::Calculator()  
{  
    UpdateData(true);  
    m_num2 = _ttof(m_string);  
    double f = 0.0f;  
    switch (flag)
	{  
        //��   
     case 0:  
        f = m_num1 + m_num2;  
        break;  
        //��   
     case 1:  
        f = m_num1 - m_num2;  
        break;  
        //��   
     case 2:  
        f = m_num1 * m_num2;  
        break;  
       //��   
     case 3:  
        if (m_num2 == 0.0f)  
        {  
           f = m_num1;  
        }  
        else  
        {  
           f = m_num1 / m_num2;  
        }  
        break;  
       //ƽ��   
     case 4:  
        f = m_num2 * m_num2;  
        break;  
        //����   
     case 5:  
        //f = sqrt(m_num2);  
        break;  
     default:  
        break;  
    }  
   //�����������ʵ�Ǹ�����   
   if(f - int(f) <= 1e-5)  
   {  
       m_string.Format(L"%d",(int)f);  
   }  
    else  
    {  
       m_string.Format(L"%f",f);  
    }  
    UpdateData(false);  
 
    m_num1 = f;  
    m_num2 = 0.0f;  
} 
