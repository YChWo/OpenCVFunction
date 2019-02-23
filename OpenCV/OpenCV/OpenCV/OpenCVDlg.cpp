
// OpenCVDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "OpenCV.h"
#include "OpenCVDlg.h"
#include "afxdialogex.h"
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

														// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton66();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON66, &CAboutDlg::OnBnClickedButton66)
END_MESSAGE_MAP()


// COpenCVDlg 대화 상자



COpenCVDlg::COpenCVDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_OPENCV_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COpenCVDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(COpenCVDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &COpenCVDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &COpenCVDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &COpenCVDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &COpenCVDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &COpenCVDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &COpenCVDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &COpenCVDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &COpenCVDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &COpenCVDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &COpenCVDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &COpenCVDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &COpenCVDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &COpenCVDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &COpenCVDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &COpenCVDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &COpenCVDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &COpenCVDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &COpenCVDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &COpenCVDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &COpenCVDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &COpenCVDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &COpenCVDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &COpenCVDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &COpenCVDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &COpenCVDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &COpenCVDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &COpenCVDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &COpenCVDlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &COpenCVDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &COpenCVDlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &COpenCVDlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &COpenCVDlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &COpenCVDlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &COpenCVDlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &COpenCVDlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &COpenCVDlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &COpenCVDlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &COpenCVDlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &COpenCVDlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &COpenCVDlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &COpenCVDlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &COpenCVDlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &COpenCVDlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &COpenCVDlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &COpenCVDlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &COpenCVDlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &COpenCVDlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &COpenCVDlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &COpenCVDlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &COpenCVDlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON51, &COpenCVDlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &COpenCVDlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &COpenCVDlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &COpenCVDlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &COpenCVDlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &COpenCVDlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &COpenCVDlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &COpenCVDlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &COpenCVDlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &COpenCVDlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &COpenCVDlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &COpenCVDlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &COpenCVDlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &COpenCVDlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &COpenCVDlg::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &COpenCVDlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &COpenCVDlg::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &COpenCVDlg::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &COpenCVDlg::OnBnClickedButton69)
END_MESSAGE_MAP()


// COpenCVDlg 메시지 처리기

BOOL COpenCVDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
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

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

									// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void COpenCVDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void COpenCVDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR COpenCVDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void COpenCVDlg::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	Size2d sz(100.5, 60.6);		// 사각형 크기
	Point2f pt1(20.f, 30.f), pt2(100.f, 200.f); // 시작 좌표 및 종료 좌표

												// Rect_ 객체 기본 선언 방식
	Rect_<int>	rect1(10, 10, 30, 50);
	Rect_<float>	rect2(pt1, pt2);	// 시작 좌표 + 끝점 좌표
	Rect_<double>	rect3(Point2d(20.5, 10), sz);		// 시작 좌표 + 사이즈

														// 간결 선언 방식 & 연산 적용
	Rect	rect4 = rect1 + (Point)pt1;		// 시작 좌표 변경 -> 평행이동
	Rect2f	rect5 = rect2 + (Size2f)sz;		// 사각형 덧셈 -> 크기 변경
	Rect2d	rect6 = rect1 & (Rect)rect2;	// 두 사각형 교차 영역

	AfxMessageBox(_T("Rect + Point = 평행이동 , Rect + Size = 크기 변경, Rect & Rect = 교차영역, Rect || Rect = 포함영역"));
}


void COpenCVDlg::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image(300, 500, CV_8UC1, Scalar(255));
	Point2f center(250, 150), pts[4];
	Size2f	size(300, 100);
	RotatedRect	rot_rect(center, size, 20);

	Rect bound_rect = rot_rect.boundingRect();
	rectangle(image, bound_rect, Scalar(0), 1);
	circle(image, rot_rect.center, 1, Scalar(0), 2);
	rot_rect.points(pts);

	for (int i = 0; i < 4; i++) {
		circle(image, pts[i], 4, Scalar(0), 1);
		line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2);
	}

	imshow("회전사각형", image);
	waitKey(0);
}


void COpenCVDlg::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	cout << "생성 방법" << endl;
	cout << "Mat::Mat()" << endl;
	cout << "Mat::Mat(int rows, int cols, int type)" << endl;
	cout << "Mat::Mat(int rows, int cols, const Scalar& s)" << endl;
	cout << "Mat::Mat(int rows, int cols, void* data, size_t step = AUTO_STEP)" << endl;
	cout << "Mat::Mat(Size size, int type)" << endl;
	cout << "Mat::Mat(Size size, int type, const Scalar& s)" << endl;
	cout << "Mat::Mat(Size size, int type, void* data, size_t step = AUTO_STEP)" << endl;

	cout << "Mat::Mat(const Mat& m)" << endl;
	cout << "Mat::Mat(const Mat& m, const Rect& roi)" << endl;
	cout << "Mat::Mat(const Mat& m, const Range* ranges)" << endl;
	cout << "Mat::Mat(int ndims, const int* sizes, type)" << endl;
	cout << "Mat::Mat(int ndims, const int* sizes, type, const Scalar& s)" << endl;
	cout << "Mat::Mat(int ndims, const int* sizes, type, void* data, const size_t step = 0)" << endl << endl;

	cout << "초기화" << endl;
	cout << "Mat::ones(int rows, int cols, int type)" << endl;
	cout << "Mat::ones(Size size, int type)" << endl;
	cout << "Mat::eyes(int rows, int cols, int type)" << endl;
	cout << "Mat::eyes(Size size, int type)" << endl;
	cout << "Mat::zeros(int rows, int cols, int type)" << endl;
	cout << "Mat::zeros(Size size, int type)" << endl;
	cout << "Mat::zeros(int ndims, const int* sz, int type)" << endl << endl;

	cout << "멤버변수 및 메서드" << endl;
	cout << "Mat::dims, 차원 수" << endl;
	cout << "Mat::rows, 행의 개수" << endl;
	cout << "Mat::cols, 열의 개수" << endl;
	cout << "Mat::data, 행렬 원소 데이터에 대한 포인터" << endl;
	cout << "Mat::step, 행렬 한 행이 차지하는 바이트" << endl;

	cout << "Mat::channels(), 행렬 채널 수 반환" << endl;
	cout << "Mat::depth(), 행렬 깊이(행렬 자료형)값 반환" << endl;
	cout << "Mat::elemSize(), 행렬의 한 원소에 대한 바이트 크기 반환" << endl;
	cout << "Mat::elemSize1(), 행렬의 한 원소의 한 채널에 대한 바이트 크기 반환" << endl;
	cout << "Mat::empty(), 행렬 원소가 비어있는지 여부 반환" << endl;
	cout << "Mat::isSubmatrix(), 참조 행렬인지 여부" << endl;
	cout << "Mat::size(), 행렬 크기를 Size형으로 반환" << endl;
	cout << "Mat::step1(), step을 elemSize1()로 나누어 정규화된 step 반환" << endl;
	cout << "Mat::totoal(), 행렬 원소의 전체 개수 반환" << endl;
	cout << "Mat::type(), 행렬 데이터 타입 반환" << endl << endl;

	cout << "크기 및 형태 변경" << endl;
	cout << "void resize() : 행의 개수를 기준으로 기존 행렬의 크기를 변경" << endl;
	cout << "Mat reshape() : 행렬의 전체 원소 개수는 바뀌지 않으면서 행렬의 모양을 변경하여 새 행렬 반환, 전체 원수 개수가 일치하지 않으면 에러" << endl;
	cout << "void create() : 기존에 존재하는 행렬의 모든것을 변경하여 다시 생성, 기존과 다르면 메모리 해제하고 새로운 데이터 생성" << endl << endl;

	cout << "복사 및 자료형 변환" << endl;
	cout << "Mat clone() : 행렬 데이터와 같은 값을 복사해서 새로운 행렬 반환" << endl;
	cout << "void copyTo() : 행렬 데이터를 인자로 입력된 mat 행렬에 복사" << endl;
	cout << "void converTo() : 행렬 원소의 데이터 타입을 변경하여 인수로 입력된 mat 행렬에 반환" << endl << endl;

}


void COpenCVDlg::OnBnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	cout << "Range 클래스" << endl;
	cout << "Range(int _start, int _end) : 서브 시퀀스의 시작 위치(포함), 종료 위치(미포함)" << endl;
	cout << "int size() : 서브 시퀀스 크기 반환" << endl;
	cout << "bool empty() : 서브 시퀀스 비어있는지 확인" << endl;
	cout << "Range all() : 서브 시퀀스 가득 차있는지 확인" << endl << endl;

	cout << "행렬 헤더 생성" << endl;
	cout << "-> 행렬 데이터를 위한 메모리를 새로 생성하지 않고 행렬을 공유함" << endl;
	cout << "-> 특정 영역을 공유하는 것은 특정 부분에 대한 영상처리를 수월하게 할 수 있다" << endl << endl;

	cout << "Mat row(int y), 기존 행렬에서 지정된 행을 위한 헤더를 생성하여 반환" << endl;
	cout << "Mat col(int x), 기존 행렬에서 지정된 열을 위한 헤더를 생성하여 반환" << endl;
	cout << "Mat rowRange(int startrow, int endrow), 지정된 연속된 행을 위한 행렬 헤더 생성하여 반환" << endl;
	cout << "Mat colRange(int startrow, int endrow), 지정된 연속된 열을 위한 행렬 헤더 생성하여 반환" << endl;
	cout << "void locateROI(), 부분 행렬에서 부모 행렬의 크기와 위치를 알려준다" << endl;
	cout << "Mat& adjustROI(), 부분 행렬에서 관심영역의 크기와 위치를 조정한다" << endl;
	cout << "Mat operator()(), 사각형의 부분 행렬을 추출한다" << endl << endl;

}


void COpenCVDlg::OnBnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	string msg1 = "a is one";
	string msg2 = "b is two";
	string msg3 = "c is three";
	int a;

	while (true)
	{
		cout << "input a:";
		cin >> a;

		try {
			if (a == 0) CV_Error(Error::StsDivByZero, "a is zero");
			if (a == 1) CV_Error(Error::StsBadSize, msg1);
			if (a == 2) CV_Error_(Error::StsOutOfRange, ("%s : %d", msg2.c_str(), a));
			if (a == 2) CV_Error_(Error::StsBadArg, ("%s : %d", msg3.c_str(), a));

			CV_Assert(a != 4);
		}
		catch (cv::Exception &e)
		{
			cout << "Exception code (" << e.code << "):" << e.what();
			cout << endl;
			if (e.code == Error::StsAssert)
				break;
		}
	}
}


void COpenCVDlg::OnBnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Scalar blue(255, 0, 0), red(0, 0, 255), green(0, 255, 0);
	Scalar white = Scalar(255, 255, 255);
	Scalar yellow(0, 255, 255);

	Mat image(400, 600, CV_8UC3, white);
	Point pt1(50, 130), pt2(200, 300), pt3(300, 150), pt4(400, 50);
	Rect rect(pt3, Size(200, 150));

	line(image, pt1, pt2, red);
	line(image, pt3, pt4, green, 2, LINE_AA);
	line(image, pt3, pt4, green, 3, LINE_8, 1);

	rectangle(image, rect, blue, 2);
	rectangle(image, rect, blue, FILLED, LINE_4, 1);
	rectangle(image, pt1, pt2, red, 3);

	imshow("직선&사각형", image);
	waitKey(0);

}


void COpenCVDlg::OnBnClickedButton7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Scalar olive(128, 128, 0), violet(221, 160, 221), brown(42, 422, 165);
	Point pt1(20, 100), pt2(20, 200), pt3(20, 250);

	Mat image(300, 500, CV_8UC3, Scalar(255, 255, 255));

	putText(image, "SIMPLEX", Point(20, 30), FONT_HERSHEY_SIMPLEX, 1, brown);
	putText(image, "DUPLEX", pt1, FONT_HERSHEY_DUPLEX, 2, olive);
	putText(image, "TRIPLEX", pt2, FONT_HERSHEY_TRIPLEX, 3, violet);
	putText(image, "ITALIC", pt3, FONT_HERSHEY_PLAIN | FONT_ITALIC, 2, violet);

	imshow("글자쓰기", image);
	waitKey(0);
}


void COpenCVDlg::OnBnClickedButton8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Scalar orange(0, 165, 255), blue(255, 0, 0), magenta(255, 0, 255);
	Mat image(300, 500, CV_8UC3, Scalar(255, 255, 255));

	Point center = (Point)image.size() / 2;
	Point pt1(70, 50), pt2(350, 220);

	circle(image, center, 100, blue);
	circle(image, pt1, 80, orange, 2);
	circle(image, pt2, 60, magenta, -1);

	int font = FONT_HERSHEY_COMPLEX;
	putText(image, "center_blue", center, font, 1.2, blue);
	putText(image, "pt1_oragne", pt1, font, 0.8, orange);
	putText(image, "pt2_magenta", pt2 + Point(2, 2), font, 0.5, Scalar(0, 0, 0), 2);
	putText(image, "pt2_magenta", pt2, font, 0.5, magenta, 1);

	imshow("원그리기", image);
	waitKey(0);
}


void COpenCVDlg::OnBnClickedButton9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Scalar orange(0, 165, 255), blue(255, 0, 0), magenta(255, 0, 255);
	Mat image(300, 700, CV_8UC3, Scalar(255, 255, 255));

	Point pt1(120, 150), pt2(550, 150);
	circle(image, pt1, 1, Scalar(0), 1);
	circle(image, pt2, 1, Scalar(0), 1);

	// 타원 그리기
	// void ellipse(Mat& img, Point center,Size axes, double angle, double startAngle, double endAngle,
	// const Scalar& color, int thickness, int lineType, int shift)
	ellipse(image, pt1, Size(100, 60), 0, 0, 360, orange, 2);
	ellipse(image, pt1, Size(100, 60), 0, 30, 270, blue, 4);

	// 타원 그리기 (RotateRect 이용)
	// void ellipse(Mat& img, const RotatedRect& box, const Scalar& color, int thickness,int lineType)

	// 호 그리기
	ellipse(image, pt2, Size(100, 60), 30, 0, 360, orange, 2);
	ellipse(image, pt2, Size(100, 60), 30, -30, 160, magenta, 4);

	imshow("타원 및 호 그리기", image);
	waitKey(0);

}

void print_matInfo(string name, Mat img)
{
	string mat_type;
	if (img.depth() == CV_8U)		mat_type = "CV_8U";
	else if (img.depth() == CV_8S)		mat_type = "CV_8S";
	else if (img.depth() == CV_16U)		mat_type = "CV_16U";
	else if (img.depth() == CV_16S)		mat_type = "CV_16S";
	else if (img.depth() == CV_32S)		mat_type = "CV_32S";
	else if (img.depth() == CV_32F)		mat_type = "CV_32F";
	else if (img.depth() == CV_64F)		mat_type = "CV_64F";

	cout << name;
	cout << format(": depth(%d) channels(%d) -> 자료형: ", img.depth(), img.channels());
	cout << mat_type << "C" << img.channels() << endl;
}

void COpenCVDlg::OnBnClickedButton10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	string filename = "Test.jpg";
	/**
	* IMREAD_UNCHANGED : 파일에 지정된 컬러 영상을 반환(alpha 포함)
	* IMREAD_GRAYSCALE : 명암도 영상을 변환하여 반환
	* IMREAD_COLOR : 컬러 영상으로 변환하여 반환
	* IMREAD_ANYDEPTH : 입력파일에 정의된 깊이에 따라 16/32비트 영상으로 변환, 설정되지 않으면 8비트
	* IMREAD_ANYCOLOR : 파일에 정의된 타입으로 반환
	*/
	Mat gray2gray = imread(filename, IMREAD_GRAYSCALE);
	Mat gray2color = imread(filename, IMREAD_COLOR);

	namedWindow("gray2gray", WINDOW_NORMAL);
	namedWindow("gray2color", WINDOW_NORMAL);

	imshow("gray2gray", gray2gray);
	imshow("gray2color", gray2color);
	waitKey(0);

}


void COpenCVDlg::OnBnClickedButton11()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat img = imread("Test.jpg", IMREAD_COLOR);
	CV_Assert(img.data);

	vector<int>	params_jpg, params_png;
	params_jpg.push_back(IMWRITE_JPEG_QUALITY);		// JPG 화질 설정
	params_jpg.push_back(50);
	params_png.push_back(IMWRITE_PNG_COMPRESSION);
	params_png.push_back(9);

	imwrite("Write_Test_OrgJPG.jpg", img);	// 영상 파일 저장
	imwrite("Write_Test_Quality.jpg", img, params_jpg); // 지정 화질로 저장
	imwrite("Write_Test_OrgPNG.png", img, params_png);
	imwrite("Write_Test_OrgBMP.bmp", img);

	Mat img16, img32;
	img.convertTo(img16, CV_16U, 65535 / 255.0);
	img.convertTo(img32, CV_32F, 1 / 255.0f);

	imwrite("Write_Test_16Bit.tif", img16);
	imwrite("Write_Test_32Bit.tif", img32);
}


void COpenCVDlg::OnBnClickedButton12()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	cout << "VideoCapture 클래스 생성자 및 메서드" << endl << endl;
	cout << "VideoCapture::VideoCapture()" << endl;
	cout << "VideoCapture::VideoCapture(const string& filename)" << endl;
	cout << "VideoCapture::VideoCapture(int device)" << endl << endl;

	cout << "bool VideoCapture::open(const string& filename), 동영상 캡처를 위한 파일 개방" << endl;
	cout << "bool VideoCapture::open(int device), 캡쳐 장치 개방" << endl;
	cout << "bool VideoCapture::isOpened(), 캡쳐 장치의 연결 여부 반환" << endl;
	cout << "void VideoCapture::release(), 동영상 파일이나 장치 해제(수동으로 해제가 필요할 경우만)" << endl << endl;

	cout << "double VideoCapture::get(int propId), 속성식별자 반환" << endl;
	cout << "bool VideoCapture::set(int propId, double value), 지정된 속성식별자로 세팅" << endl;
	cout << "bool VideoCapture::grab(), 캡쳐장치나 동영상으로부터 다음 프레임을 잡는다" << endl;
	cout << "bool VideoCapture::retrieve(Mat& image, int channel), grab()으로 잡은 이미지를 image 행렬로 전달" << endl << endl;

	cout << "bool VideoCapture::read(Mat& image), grab/retrieve 동시 수행" << endl;
	cout << "Videocapture& VideoCapture::operator>>(Mat& image), grab/retrieve 동시 수행" << endl;
}


void COpenCVDlg::OnBnClickedButton13()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	cout << "VideoWriter 클래스 생성자 및 메서드" << endl << endl;
	cout << "VideoWriter::Writer()" << endl;
	cout << "VideoWriter::Writer(const string& filename, int fourcc, double fps, Size frameSize, bool isColor)" << endl;
	cout << "VideoWriter::open(const string& filename, int fourcc, double fps, Size frameSize, bool isColor), 파일 개방" << endl;
	cout << "VideoWriter::isOpened(), 객체 개방여부" << endl;
	cout << "void VideoWriter::writer(const Mat& image), 파일 저장" << endl;
	cout << "void VideoWriter::operator<<(const Mat& image), 파일 저장" << endl;


}

void put_string(Mat& frame, string text, Point pt, int value)
{
	text += to_string(value);
	Point shade = pt + Point(2, 2);
	int font = FONT_HERSHEY_SIMPLEX;
	putText(frame, text, shade, font, 0.7, Scalar(0, 0, 0), 2);
	putText(frame, text, pt, font, 0.7, Scalar(120, 200, 90), 2);
}

void COpenCVDlg::OnBnClickedButton14()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/**
	* CAP_PROP_POS_MSEC			: 동영상 파일의 현재 위치(ms)
	* CAP_PROP_POS_FRAMES		: 캡쳐되는 프레임의 번호
	* CAP_PROP_POS_AVI_RATIO	: 동영상 파일의 상대적 위치(0 - 시작, 1 - 끝)
	* CAP_PROP_FRAME_WIDTH		: 프레임 너비
	* CAP_PROP_FRAME_HEIGHT		: 프레임 높이
	* CAP_PROP_FPS				: 프레임 너비
	* CAP_PROP_FOURCC			: 코덱의 4문자
	* CAP_PROP_FRAME_COUNT		: 동영상 파일의 총 프레임 수
	* CAP_PROP_MODE				: retrieve()에 의해 반환되는 Mat 영상 포맷
	* CAP_PROP_BRIGHTNESS		: 카메라에서 영상의 밝기
	* CAP_PROP_CONTRAST 		: 카메라에서 영상의 대비
	* CAP_PROP_SATURATION 		: 카메라에서 영상의 포화도
	* CAP_PROP_HUE	 			: 카메라에서 영상의 색조
	* CAP_PROP_GAIN				: 카메라에서 영상의 Gain
	* CAP_PROP_EXPOSURE 		: 카메라에서의 노출
	* CAP_PROP_AUTOFOCUS 		: 자동 초점 조절
	*/
	VideoCapture capture(0);
	if (!capture.isOpened()) {
		cout << "카메라가 연결되지 않았습니다." << endl;
		exit(1);
	}

	cout << "너비 " << capture.get(CAP_PROP_FRAME_WIDTH) << endl;
	cout << "높이 " << capture.get(CAP_PROP_FRAME_HEIGHT) << endl;
	cout << "노출 " << capture.get(CAP_PROP_EXPOSURE) << endl;
	cout << "밝기 " << capture.get(CAP_PROP_BRIGHTNESS) << endl;

	while (1)
	{
		Mat frame;
		capture.read(frame);

		put_string(frame, "EXPOS: ", Point(10, 40), capture.get(CAP_PROP_EXPOSURE));
		imshow("카메라 영상보기", frame);
		if (waitKey(30) >= 0) break;
	}
}


VideoCapture	captureCameraConfig(0);
void zoom_bar(int value, void*)
{
	captureCameraConfig.set(CAP_PROP_ZOOM, value);	// 트랙바 콜백함수
}	 // 트랙바 콜백 함수

void focus_bar(int value, void*)
{
	captureCameraConfig.set(CAP_PROP_FOCUS, value);	// 트랙바 콜백함수
} // 트랙바 콜백 함수

void COpenCVDlg::OnBnClickedButton15()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/**
	* CAP_PROP_POS_MSEC			: 동영상 파일의 현재 위치(ms)
	* CAP_PROP_POS_FRAMES		: 캡쳐되는 프레임의 번호
	* CAP_PROP_POS_AVI_RATIO	: 동영상 파일의 상대적 위치(0 - 시작, 1 - 끝)
	* CAP_PROP_FRAME_WIDTH		: 프레임 너비
	* CAP_PROP_FRAME_HEIGHT		: 프레임 높이
	* CAP_PROP_FPS				: 프레임 너비
	* CAP_PROP_FOURCC			: 코덱의 4문자
	* CAP_PROP_FRAME_COUNT		: 동영상 파일의 총 프레임 수
	* CAP_PROP_MODE				: retrieve()에 의해 반환되는 Mat 영상 포맷
	* CAP_PROP_BRIGHTNESS		: 카메라에서 영상의 밝기
	* CAP_PROP_CONTRAST 		: 카메라에서 영상의 대비
	* CAP_PROP_SATURATION 		: 카메라에서 영상의 포화도
	* CAP_PROP_HUE	 			: 카메라에서 영상의 색조
	* CAP_PROP_GAIN				: 카메라에서 영상의 Gain
	* CAP_PROP_EXPOSURE 		: 카메라에서의 노출
	* CAP_PROP_AUTOFOCUS 		: 자동 초점 조절
	*/

	captureCameraConfig.open(0);
	CV_Assert(captureCameraConfig.isOpened());

	captureCameraConfig.set(CAP_PROP_FRAME_WIDTH, 400);
	captureCameraConfig.set(CAP_PROP_FRAME_HEIGHT, 300);
	captureCameraConfig.set(CAP_PROP_AUTOFOCUS, 0);
	captureCameraConfig.set(CAP_PROP_BRIGHTNESS, 150);

	int zoom = captureCameraConfig.get(CAP_PROP_ZOOM);
	int focus = captureCameraConfig.get(CAP_PROP_FOCUS);

	string title = "카메라 속성변경";
	namedWindow(title);
	createTrackbar("zoom", title, &zoom, 10, zoom_bar);
	createTrackbar("focus", title, &focus, 40, focus_bar);

	while (1)
	{
		Mat frame;
		captureCameraConfig >> frame;

		put_string(frame, "zoom: ", Point(10, 240), zoom);
		put_string(frame, "focus: ", Point(10, 270), focus);

		imshow(title, frame);
		if (waitKey(30) >= 0) break;

	}
}


void COpenCVDlg::OnBnClickedButton16()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	VideoCapture capture(0);
	CV_Assert(capture.isOpened());

	double fps = 29.97;			// 초당 프레임 수
	int delay = cvRound(1000.0 / fps); // 프레임간 지연시간
	Size size(640, 360);	// 동영상 파일 해상도
	int fourcc = VideoWriter::fourcc('D', 'X', '5', '0');	// 압축 코덱 설정

	capture.set(CAP_PROP_FRAME_WIDTH, size.width);
	capture.set(CAP_PROP_FRAME_HEIGHT, size.height);

	VideoWriter writer;
	writer.open("Test_Camera_Video.avi", fourcc, fps, size);
	CV_Assert(writer.isOpened());

	while (1)
	{
		Mat frame;
		capture >> frame;
		writer << frame;

		imshow("카메라 영상보기", frame);
		if (waitKey(delay) >= 0) break;
	}
}


void COpenCVDlg::OnBnClickedButton17()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strFileName;
	CString str = _T("Video files(*.avi)|*.avi|");
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, str);
	if (dlg.DoModal() == IDOK) {
		strFileName = dlg.GetPathName();
	}

	CT2CA pszConvertedAnsiString(strFileName);
	std::string path(pszConvertedAnsiString);

	VideoCapture capture;
	capture.open(path);

	double frame_rate = capture.get(CV_CAP_PROP_FPS);
	int delay = 1000 / frame_rate;
	int frame_cnt = 0;
	Mat frame;

	while (capture.read(frame))
	{
		if (waitKey(delay) >= 0) break;

		if (frame_cnt < 100);
		else if (frame_cnt < 200) frame -= Scalar(0, 0, 100);
		else if (frame_cnt < 300) frame += Scalar(100, 0, 0);
		else if (frame_cnt < 400) frame = frame * 1.5;
		else if (frame_cnt < 500) frame = frame * 0.5;

		put_string(frame, "frame_cnt ", Point(20, 50), frame_cnt);
		imshow("동영상 파일읽기", frame);

		frame_cnt++;
	}
}


void COpenCVDlg::OnBnClickedButton18()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	FileStorage fs("test.xml", FileStorage::WRITE);
	string name = "유창우";
	fs << "name" << name;
	fs << "tall" << 178;
	fs << "Image" << "[" << "Test.jpg" << "Test2.jpg" << "]";

	fs << "hardware" << "{";
	fs << "cpu" << 25;
	fs << "mainboard" << 10;
	fs << "ram" << 6 << "}";

	int data[] = { 1,2,3,4,5,6 };
	vector<int> vec(data, data + sizeof(data) / sizeof(float));
	fs << "vector" << vec;
	Mat m(2, 3, CV_32S, data);
	fs << "Mat" << m;

	Point2d pt(10.5, 200);
	Rect rect(pt, Size(100, 200));
	fs << "Point" << pt;
	fs << "Rect" << rect;

	fs.release();
}


void COpenCVDlg::OnBnClickedButton19()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.+
	CString strFileName;
	CString str = _T("xml files(*.xml)|*.xml|");
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, str);
	if (dlg.DoModal() == IDOK) {
		strFileName = dlg.GetPathName();
	}

	CT2CA pszConvertedAnsiString(strFileName);
	std::string path(pszConvertedAnsiString);

	FileStorage fs(path, FileStorage::READ);
	CV_Assert(fs.isOpened());

	string name, image;
	int tall;

	fs["name"] >> name;
	fs["tall"] >> tall;
	cout << "name : " << name << endl;
	cout << "tall : " << tall << endl;

	FileNode node_img = fs["Image"];
	FileNode node_hd = fs["hardware"];

	try {
		if (node_img.type() != FileNode::SEQ)
			CV_Error(Error::StsError, "시퀀스 노드가 아닙니다.");
		if (!node_hd.isMap())
			CV_Error(Error::StsError, "매핑 노드가 아닙니다.");
	}
	catch (Exception  &e) {
		exit(1);
	}

	cout << "[Image]  ";
	cout << (string)node_img[0] << ", ";
	cout << (string)node_img[1] << ", ";

	cout << "[hardware] " << endl;
	cout << " cpu " << (int)node_hd["cpu"] << endl;
	cout << " mainboard " << (int)node_hd["mainboard"] << endl;
	cout << " ram " << (int)node_hd["ram"] << endl;

	Point pt;
	Rect rect;
	Mat mat;
	vector<float> vec;
	fs["vector"] >> vec;
	fs["Point"] >> pt;
	fs["Rect"] >> rect;
	fs["Mat"] >> mat;

	cout << "[vec] = " << ((Mat)vec).t() << endl;
	cout << "[pt] = " << pt << endl;
	cout << "[rect] = " << rect << endl << endl;
	cout << "[mat] = " << endl << mat << endl;

	fs.release();

}


void COpenCVDlg::OnBnClickedButton20()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.	
	Mat m1(3, 5, CV_32SC1);
	Mat m2(3, 5, CV_32FC1);
	Mat m3(3, 5, CV_8UC2);
	Mat m4(3, 5, CV_32SC3);

	for (int i = 0, k = 0; i < m1.rows; i++) {
		for (int j = 0; j < m1.cols; j++, k++) {
			m1.at<int>(i, j) = k;
			Point pt(j, i);			// Point 의 경우 x,y 순서로 들어가야 한다
			m2.at<float>(pt) = (float)j;

			int idx[2] = { i,j };
			m3.at<Vec2b>(idx) = Vec2b(0, 1);

			m4.at<Vec3i>(i, j)[0] = 0;
			m4.at<Vec3i>(i, j)[1] = 1;
			m4.at<Vec3i>(i, j)[2] = 2;
		}
	}

	for (int i = 0; i<4; i++)
		cout << "[m" << i + 1 << "] = " << endl << m1 << endl;
}




void COpenCVDlg::OnBnClickedButton21()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat	m1(3, 5, CV_8UC1);
	Mat	m2(m1.size(), CV_32FC1);

	for (int i = 0, k = 0; i < m1.rows; i++)
	{
		uchar*	ptr_m1 = m1.ptr(i);
		float*  ptr_m2 = m2.ptr<float>(i);

		for (int j = 0; j < m1.cols; j++)
		{
			ptr_m1[j] = j;
			*(ptr_m2 + j) = (float)j;
		}
	}

	cout << " m1 = " << endl << m1 << endl << endl;
	cout << " m2 = " << endl << m2 << endl;
}


void COpenCVDlg::OnBnClickedButton22()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 콜렉션의 타입이나 내부 구조와 관계없이 동일하게 사용할 수 있기 때문에 
	// 접근 방식을 일반화 할 수 있다는 장점이 있다.

	// cv::MatIterator_ : 읽기/쓰기 가능
	// cv::MatConstIterator_ : 읽기만 가능

	uchar data[] = {
		1,2,3,
		1,2,3,
		1,2,3
	};

	Mat m1(3, 3, CV_8UC1, data);
	Mat m2(m1.size(), m1.type());
	Mat m3(m1.size(), CV_32FC3);

	MatConstIterator_<uchar> it_m1 = m1.begin<uchar>();		// 반복자 선언
	MatIterator_<uchar> it_m2 = m2.begin<uchar>();
	Mat_<Vec3f>::iterator it_m3 = m3.begin<Vec3f>();

	for (; it_m1 != m1.end<uchar>(); ++it_m1, ++it_m2, ++it_m3)
	{
		*it_m2 = *it_m1;

		(*it_m3)[0] = *it_m1 * 0.5f;
		(*it_m3)[1] = *it_m1 * 0.3f;
		(*it_m3)[2] = *it_m1 * 0.2f;
	}

	for (int i = 0; i<4; i++)
		cout << "[m" << i + 1 << "] = " << endl << m1 << endl;
}


void COpenCVDlg::OnBnClickedButton23()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image = imread("Test.jpg", IMREAD_GRAYSCALE);
	CV_Assert(!image.empty());

	Mat dst1 = image + 100;
	Mat dst2 = image - 100;
	Mat dst3 = 255 - image;

	Mat dst4(image.size(), image.type());
	Mat dst5(image.size(), image.type());

	for (int i = 0; i < image.rows; i++) {
		for (int j = 0; j < image.cols; j++) {
			dst4.at<uchar>(i, j) = image.at<uchar>(i, j) + 100;
			dst4.at<uchar>(i, j) = 255 - image.at<uchar>(i, j);
		}
	}

	namedWindow("원 영상", WINDOW_NORMAL);
	namedWindow("dst1 - 밝게", WINDOW_NORMAL);
	namedWindow("dst2 - 어둡게", WINDOW_NORMAL);
	namedWindow("dst3 - 반전", WINDOW_NORMAL);
	namedWindow("dst4 - 밝게", WINDOW_NORMAL);
	namedWindow("dst5 - 반전", WINDOW_NORMAL);

	imshow("원 영상", image);
	imshow("dst1 - 밝게", dst1);
	imshow("dst2 - 어둡게", dst2);
	imshow("dst3 - 반전", dst3);
	imshow("dst4 - 밝게", dst4);
	imshow("dst5 - 반전", dst5);

}


void COpenCVDlg::OnBnClickedButton24()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	// 명암 대비 => 큰값과 작은값의 차이를 늘리거나 줄이기 쉬운 방법은 곱셈 연산을 수행

	Mat image = imread("Test.jpg", 0);
	CV_Assert(image.data);

	Scalar avg = mean(image) / 2.0;		// 원본 영상 화소 평균의 절반
	Mat dst1 = image * 0.5;				// 명암대비 감소
	Mat dst2 = image * 2;				// 명암대비 증가
	Mat dst3 = image * 0.5 + avg[0];	// 영상 평균 이용 대비 감소
	Mat dst4 = image * 2 - avg[0];		// 영상 평균 이용 대비 증가

	namedWindow("image", WINDOW_NORMAL);
	namedWindow("대비감소", WINDOW_NORMAL);
	namedWindow("대비증가", WINDOW_NORMAL);
	namedWindow("평균이용 대비감소", WINDOW_NORMAL);
	namedWindow("평균이용 대비증가", WINDOW_NORMAL);

	imshow("image", image);
	imshow("대비감소", dst1);
	imshow("대비증가", dst2);
	imshow("평균이용 대비감소", dst3);
	imshow("평균이용 대비증가", dst4);


}


void calc_Histo(const Mat& image, Mat& hist, int bins, int range_max = 256)
{
	int histSize[] = { bins };						// 히스토그램 계급 개수
	float range[] = { 0, (float)range_max };		// 0번 채널 화소값 범위
	int	channels[] = { 0 };							// 채널 목록 - 단일채널
	const float* ranges[] = { range };				// 모든 채널 화소 범위

													/* void calcHist()
													* Mat* images		: 원본 영상배열 (CV_8U or Cv_32F형으로 크기가 같아야함)
													* int nimages		: 원본 영상의 개수
													* int* channels	: 히스토그램 계산에 사용되는 차원 목록
													* InputArray mask	: 특정 영역만 계산하기 위한 마스크 행렬
													* OutputArray hist	: 계산된 히스토그램이 출력되는 배열
													* int dims			: 히스토그램의 차원 수
													* int* histSize	: 각 차원의 히스토그램 배열 크기 - 계급의 개수
													* float** ranges	: 각 차원의 히스토그램의 범위
													* bool uniform		: 히스토그램이 균일한지를 나타내는 플래그
													* bool accumulate	: 누적 플래그

													*/

	calcHist(&image, 1, channels, Mat(), hist, 1, histSize, ranges);
}

void draw_Histo(Mat hist, Mat& hist_img, Size size = Size(256, 200))
{
	hist_img = Mat(size, CV_8U, Scalar(255));
	float bin = (float)hist_img.cols / hist_img.rows;
	normalize(hist, hist, 0, hist_img.rows, NORM_MINMAX);

	for (int i = 0; i < hist.rows; i++)
	{
		float start_x = i*bin;
		float end_x = (i + 1) * bin;
		Point2f pt1(start_x, 0);						// 막대 사각형 x 좌표
		Point2f pt2(end_x, hist.at<float>(i));			// 막대 사각형 y 좌표

		if (pt2.y > 0)
			rectangle(hist_img, pt1, pt2, Scalar(0), -1);
	}

	flip(hist_img, hist_img, 0);		// x축 기준 영상 뒤집기
}

void COpenCVDlg::OnBnClickedButton25()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image = imread("Test.jpg", IMREAD_GRAYSCALE);
	CV_Assert(!image.empty());

	Mat hist, hist_img;
	calc_Histo(image, hist, 256);
	draw_Histo(hist, hist_img);

	namedWindow("image", WINDOW_NORMAL);
	namedWindow("histo_image", WINDOW_NORMAL);

	imshow("image", image);
	imshow("histo_imgae", hist_img);

}

Mat make_palatte(int rows)
{
	Mat hsv(rows, 1, CV_8UC3);
	for (int i = 0; i < rows; i++)
	{
		uchar hue = saturate_cast<uchar>((float)i / rows * 180);		// 색상 계산
		hsv.at<Vec3b>(i) = Vec3b(hue, 255, 255);						// HSV 컬러 지정
	}

	cvtColor(hsv, hsv, CV_HSV2BGR);										// HSV 컬러 -> BGR 컬러

	return hsv;
}

void draw_histo_hue(Mat hist, Mat& hist_img, Size size = Size(256, 200))
{
	Mat hsv_palatte = make_palatte(hist.rows);

	hist_img = Mat(size, CV_8UC3, Scalar(255, 255, 255));
	float bin = (float)hist_img.cols / hist.rows;
	normalize(hist, hist, 0, hist_img.rows, NORM_MINMAX);

	for (int i = 0; i < hist.rows; i++)
	{
		float start_x = (i*bin);
		float end_x = (i + 1)* bin;
		Point2f pt1(start_x, 0);
		Point2f pt2(end_x, hist.at<float>(i));

		Scalar color = hsv_palatte.at<Vec3b>(i);
		if (pt2.y > 0) rectangle(hist_img, pt1, pt2, color, -1);
	}

	flip(hist_img, hist_img, 0);
}

void COpenCVDlg::OnBnClickedButton26()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image = imread("Test.jpg", 1);
	CV_Assert(!image.empty());

	Mat HSV_img, HSV_arr[3];
	cvtColor(image, HSV_img, CV_BGR2HSV);
	split(HSV_img, HSV_arr);

	Mat hue_hist, hue_hist_img;
	calc_Histo(HSV_arr[0], hue_hist, 18, 180);
	draw_histo_hue(hue_hist, hue_hist_img, Size(360, 200));

	namedWindow("image", WINDOW_NORMAL);
	namedWindow("hue_hist", WINDOW_NORMAL);
	imshow("image", image);
	imshow("hue_hist", hue_hist_img);
}

int search_valueIdx(Mat hist, int bias = 0)
{
	for (int i = 0; i < hist.rows; i++) {
		int idx = abs(bias - i);
		if (hist.at<float>(idx) > 0) return idx;
	}
	return -1;
}

void COpenCVDlg::OnBnClickedButton27()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	// 명암 분포가 좁은 히스토그램을 좌우로 잡아당겨 고른 명암 분포를 가진 히스토그램이 되게 하는 것
	// 해당 히스토그램에서 가장 낮은 화소값을 0으로, 높은 값을 255로 당긴 후,
	// 중간 화소값은 (high - low)의 차분값으로 정규화 하여 재분포

	Mat image = imread("smog.jpg", 0);
	CV_Assert(!image.empty());

	Mat hist, hist_dst, hist_img, hist_dst_img;
	int histsize = 64, ranges = 256;		// 계급 개수 및 화소 범위
	calc_Histo(image, hist, histsize, ranges);

	float bin_width = (float)ranges / histsize;			// 계급 너비
	int low_value = (int)(search_valueIdx(hist, 0)*bin_width);
	int high_value = (int)(search_valueIdx(hist, hist.rows - 1)*bin_width);

	int d_value = high_value - low_value;
	Mat dst = (image - low_value) * (255.0 / d_value);

	calc_Histo(dst, hist_dst, histsize, ranges);
	draw_Histo(hist, hist_img);
	draw_Histo(hist_dst, hist_dst_img);

	namedWindow("image", 1);
	namedWindow("hist_img", 1);
	namedWindow("dst", 1);
	namedWindow("hist_dst_img", 1);

	imshow("image", image);
	imshow("hist_img", hist_img);
	imshow("dst", dst);
	imshow("hist_dst_img", hist_dst_img);

}

void create_hist(Mat img, Mat& hist, Mat& hist_img)
{
	int histsize = 256, range = 256;
	calc_Histo(img, hist, histsize, range);
	draw_Histo(hist, hist_img);
}

void COpenCVDlg::OnBnClickedButton28()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 한쪽으로 치우친 명암 분포를 가진 영상을 히스토그램의 재분배 과정을 거쳐서 균등한 히스토그램 분포를 갖게 함
	// 1. 영상의 히스토그램 계산
	// 2. 히스토그램 빈도값에서 누적 빈도수(누적합)를 계산
	// 3. 누적 빈도수를 정규화
	// 4. 결과 화소값 = 정규화 누적합 * 최대 화소값

	Mat image = imread("Test.jpg", 0);
	CV_Assert(!image.empty());
	Mat hist, dst1, dst2, hist_img, hist_img1, hist_img2;
	create_hist(image, hist, hist_img);

	// 히스토그램 누적합 계산
	Mat accum_hist = Mat(hist.size(), hist.type(), Scalar(0));
	accum_hist.at<float>(0) = hist.at<float>(0);
	for (int i = 1; i < hist.rows; i++)
		accum_hist.at<float>(i) = accum_hist.at<float>(i - 1) + hist.at<float>(i);

	accum_hist /= sum(hist)[0];	// 누적합의 정규화
	accum_hist *= 255;
	dst1 = Mat(image.size(), CV_8U);
	for (int i = 0; i < image.rows; i++) {
		for (int j = 0; j < image.cols; j++) {
			int idx = image.at<uchar>(i, j);
			dst1.at<uchar>(i, j) = (uchar)accum_hist.at<float>(idx);
		}
	}

	// normalize(accum_hist, accum_hist, 0, 255, NORM_MINMAX);	// 누적합 정규화
	// accum_hist.convertTo(accum_hist, CV_8U);
	// LUT(image, accum_hist, dst1);		// 룩업테이블 적용

	equalizeHist(image, dst2);		// 히스토그램 평활화
	create_hist(dst1, hist, hist_img1);
	create_hist(dst2, hist, hist_img2);

	namedWindow("image", WINDOW_NORMAL);	namedWindow("img_hist", WINDOW_NORMAL);
	namedWindow("dst1-User", WINDOW_NORMAL);	namedWindow("User_hist", WINDOW_NORMAL);
	namedWindow("dst2-OpenCV", WINDOW_NORMAL);	namedWindow("Opencv_hist", WINDOW_NORMAL);

	imshow("image", image);	imshow("img_hist", hist_img);
	imshow("dst1-User", dst1);	imshow("User_hist", hist_img1);
	imshow("dst2-OpenCV", dst2);	imshow("Opencv_hist", hist_img2);
}

void COpenCVDlg::OnBnClickedButton29()
{
	/*
	1) Format
	- cvGoodFeaturesToTrack(CvArr* img, CvArr* eigImage, CvArr* tmpImage, CvPoint2D32f* corners, int* cornerCount, double qualityLevel, double minDistance, CvArr* mask = NULL, int blockSize = 3, int useHarris = 0, double k = 0.04);

	2) Function
	- 이미지에서 고유값(Eigen Value)이 큰 모서리를 찾는다.
	- 함수는 먼저 원본 이미지에서 cvCornerMinEigenVal() 함수를 통해 가장 작은 고유값(Eigen Value)을 찾고, eigImage에 저장한다.그 값보다 고유값(Eigen Value)이 작은 모서리들은 계산에서 제외한다.

	• image – 8비트, 32비트 부동소수점 단일 채널 영상
	• corners – 검출된 코너를 담을 벡터 ex) vector<Point2f>
	• maxCorners – 반환될 코너의 최대 개수, 만약 찾아낸 코너의 수가 더 많을 경우, 강력한 코너가 반환된다.
	• qualityLevel – 코너라고 판단하기 위한 기준이 되는 최소의 값, 이 값은 최고의 minimal eigenvalue를 가지는 코너의 quality에 곱해지며,
	그 값보다 작은 quality를 갖는 코너는 코너라고 판단하지 않는다. 예를 들어, 최고의 minimal eigenvalue=1500 이고, qualityLevel= 0.01 이면, quality가 15보다 작은 코너는 무시된다.
	• minDistance – 반환되는 코너 사이의 최소 유클리디안 거리
	• mask – 코너를 찾을 관심영역, input과 크기가 동일해야한다..
	• blockSize – 평균 블록의 크기
	• useHarrisDetector – 해리스 코너 검출기를 사용할 것인가를 결정하는 플래그
	• k – 해리스 검출기를 위한 파라미터
	*/
	Mat tmpImage = imread("LED.jpg");
	vector<Point2f> corner;

	Mat mask = tmpImage.clone();
	Mat gray;

	cvtColor(mask, gray, CV_BGR2GRAY);
	goodFeaturesToTrack(gray, corner, 4, 0.1, 5.0, Mat(), 3, false, 0.04);

	for (size_t i = 0; i < corner.size(); i++)
		circle(mask, corner[i], 5, Scalar(255, 255, 0));

	namedWindow("image", WINDOW_NORMAL);
	imshow("image", mask);
}


void COpenCVDlg::OnBnClickedButton30()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// RGB Color : 빛의 중첩 원리
	// CMY Color : 색의 중첩 원리, RGB 컬러 공간과 보색 관계
	Mat BGR = imread("Test.jpg", IMREAD_COLOR);
	CV_Assert(BGR.data);

	Scalar white(255, 255, 255);
	Mat CMY = white - BGR;
	Mat CMY_arr[3];
	split(CMY, CMY_arr);

	namedWindow("BGR", WINDOW_NORMAL);
	namedWindow("CMY", WINDOW_NORMAL);
	namedWindow("Yellow", WINDOW_NORMAL);
	namedWindow("Magenta", WINDOW_NORMAL);
	namedWindow("Cyan", WINDOW_NORMAL);

	imshow("BGR", BGR);
	imshow("CMY", CMY);
	imshow("Yellow", CMY_arr[0]);
	imshow("Magenta", CMY_arr[1]);
	imshow("Cyan", CMY_arr[2]);
}



void COpenCVDlg::OnBnClickedButton31()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	/**
	* CMYK 색상환은 프린트 잉크 원리에 적용할 수 있으며
	* CMY 색상환으로 사용하기에는 컬러 잉크가 많이 사용되기 때문에
	* Black 채널을 추가하여 검은색 잉크를 사용하여 컬러 잉크 절약 가능
	*/

	Mat BGR = imread("Test.jpg", IMREAD_COLOR);
	CV_Assert(BGR.data);

	Scalar white(255, 255, 255);
	Mat CMY = white - BGR;
	Mat CMY_arr[3];
	split(CMY, CMY_arr);

	// 각 채널의 가장 어두운 부분을 black 채널로 분리
	Mat black;
	min(CMY_arr[0], CMY_arr[1], black);
	min(black, CMY_arr[2], black);

	for (int i = 0; i < 3; i++)
		CMY_arr[i] -= black;

	namedWindow("BGR", WINDOW_NORMAL);
	namedWindow("Black", WINDOW_NORMAL);
	namedWindow("Yellow", WINDOW_NORMAL);
	namedWindow("Magenta", WINDOW_NORMAL);
	namedWindow("Cyan", WINDOW_NORMAL);

	imshow("BGR", BGR);
	imshow("Black", black);
	imshow("Yellow", CMY_arr[0]);
	imshow("Magenta", CMY_arr[1]);
	imshow("Cyan", CMY_arr[2]);

}

void BGR2HSI(Mat img, Mat& hsi)
{
	hsi = Mat(img.size(), CV_32FC3);
	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			float B = img.at<Vec3b>(i, j)[0];
			float G = img.at<Vec3b>(i, j)[1];
			float R = img.at<Vec3b>(i, j)[2];

			float s = 1 - 3 * min(R, min(G, B)) / (R + B + G);		// 채도 계산
			float v = (R + G + B) / 3.0f;							// 명도 계산

			float tmp1 = ((R - G) + (R - B)) * 0.5f;
			float tmp2 = sqrt((R - G) * (R - B) + (G - B) * (G - B));
			float angle = acos(tmp1 / tmp2) * (180.f / CV_PI);
			float h = (B <= G) ? angle : 360 - angle;				// 색상 계산

			hsi.at<Vec3f>(i, j) = Vec3f(h / 2, s * 255, v);
		}
	}
	hsi.convertTo(hsi, CV_8U);
}

void COpenCVDlg::OnBnClickedButton32()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	// 색상(Hue), 채도(Saturation), 명도(Intensity) 세 가지 지각 변수

	Mat BGR = imread("Test.jpg", IMREAD_COLOR);
	CV_Assert(BGR.data);
	Mat HSI_img, HSV_img, hsi[3], hsv[3];

	BGR2HSI(BGR, HSI_img);					// 사용자 정의
	cvtColor(BGR, HSV_img, CV_BGR2HSV);		// Opencv
	split(HSI_img, hsi);
	split(HSV_img, hsv);

	namedWindow("BGR", WINDOW_NORMAL);
	namedWindow("H", WINDOW_NORMAL);
	namedWindow("S", WINDOW_NORMAL);
	namedWindow("I", WINDOW_NORMAL);
	namedWindow("Opencv_H", WINDOW_NORMAL);
	namedWindow("Opencv_S", WINDOW_NORMAL);
	namedWindow("Opencv_V", WINDOW_NORMAL);

	imshow("BGR", BGR);
	imshow("H", hsi[0]);
	imshow("S", hsi[1]);
	imshow("I", hsi[2]);
	imshow("Opencv_H", hsv[0]);
	imshow("Opencv_S", hsv[1]);
	imshow("Opencv_V", hsv[2]);
}


void COpenCVDlg::OnBnClickedButton33()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// Y - 휘도 , Cr,Cb - 색차 성분
	// 인간의 시각은 밝기에는 민감하지만, 색상에는 덜 민감하다
	// 이러한 점을 이용하여 색차 신호인 Cr, Cb 성분을 Y 성분보다 상대적으로 낮은 해상도로 구성
	// 이렇게 함으로써 인간의 시각에서 화질의 큰 저하 없이 영상 데이터의 용량을 감소 할 수 있다
	// 이러한 이유 때문에 JPEG, MPEG에서 압축을 위한 기본 컬러 공간으로 YCbCr 공간이 이용된다

	// YUV 컬러 공간은 TV 방송 규격에서 사용하는 컬러 표현 방식, HDTV에 적용되는 변환 수식이다

	Mat BGR = imread("Test.jpg", 1);
	CV_Assert(BGR.data);

	Mat YCC, YUV, Lab, Gray;
	cvtColor(BGR, Gray, CV_BGR2GRAY);
	cvtColor(BGR, YCC, CV_BGR2YCrCb);
	cvtColor(BGR, YUV, CV_BGR2YUV);
	cvtColor(BGR, Lab, CV_BGR2Lab);

	Mat YCC_arr[3], YUV_arr[3], Lab_arr[3];
	split(YCC, YCC_arr);
	split(YUV, YUV_arr);
	split(Lab, Lab_arr);

	namedWindow("BGR", WINDOW_NORMAL);
	namedWindow("GRAY", WINDOW_NORMAL);
	namedWindow("YCC_Y", WINDOW_NORMAL);
	namedWindow("YCC_Cr", WINDOW_NORMAL);
	namedWindow("YCC_Cb", WINDOW_NORMAL);
	namedWindow("YUV_Y", WINDOW_NORMAL);
	namedWindow("YUV_U", WINDOW_NORMAL);
	namedWindow("YUV_V", WINDOW_NORMAL);
	namedWindow("Lab_L", WINDOW_NORMAL);
	namedWindow("Lab_a", WINDOW_NORMAL);
	namedWindow("Lab_b", WINDOW_NORMAL);

	imshow("BGR", BGR);
	imshow("GRAY", Gray);
	imshow("YCC_Y", YCC_arr[0]);
	imshow("YCC_Cr", YCC_arr[1]);
	imshow("YCC_Cb", YCC_arr[2]);
	imshow("YUV_Y", YUV_arr[0]);
	imshow("YUV_U", YUV_arr[1]);
	imshow("YUV_V", YUV_arr[2]);
	imshow("Lab_L", Lab_arr[0]);
	imshow("Lab_a", Lab_arr[1]);
	imshow("Lab_b", Lab_arr[2]);

}

Range th(50, 100);	// 트랙바로 선택할 수 있는 범위 변수
Mat hue;

void onThreshold(int value, void* userdata)
{
	Mat result = Mat(hue.size(), CV_8U, Scalar(0));

	for (int i = 0; i < result.rows; i++)
	{
		for (int j = 0; j < result.cols; j++)
		{
			bool ck = hue.at <uchar>(i, j) >= th.start && hue.at<uchar>(i, j) < th.end;
			result.at<uchar>(i, j) = (ck) ? 255 : 0;
		}
	}

	imshow("result", result);
}

void COpenCVDlg::OnBnClickedButton34()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat BGR = imread("Apple.jpg", 1);
	CV_Assert(BGR.data);

	Mat HSV, hsv[3];
	cvtColor(BGR, HSV, CV_BGR2HSV);
	split(HSV, hsv);
	hsv[0].copyTo(hue);

	namedWindow("result", WINDOW_NORMAL);
	namedWindow("BGR_img", WINDOW_NORMAL);
	createTrackbar("Hue_th1", "result", &th.start, 255, onThreshold);
	createTrackbar("Hue_th2", "result", &th.end, 255, onThreshold);

	//onThreshold();
	imshow("BGR_img", BGR);

}

void filter(Mat img, Mat& dst, Mat mask)
{
	dst = Mat(img.size(), CV_32F, Scalar(0));
	Point h_m = mask.size() / 2;

	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			float sum = 0;
			for (int u = 0; u < mask.rows; u++)
			{
				for (int v = 0; v < mask.cols; v++)
				{
					int y = i + u - h_m.y;
					int x = j + v - h_m.x;
					sum += mask.at<float>(u, v) * img.at<uchar>(y, x);
				}
			}
			dst.at<float>(i, j) = sum;
		}
	}
}
void COpenCVDlg::OnBnClickedButton35()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	// Convolution을 이용한 블러링
	// 마스크의 전체 원소의 합은 1이 되어야 입력 영상의 밝기가 유지된다
	// Opencv에도 기본적으로 boxblur 함수가 존재
	// 마스크의 크기가 클수록 더 뿌옇게 되는 영상을 확인할 수 있음

	Mat image = imread("Apple.jpg", IMREAD_GRAYSCALE);
	CV_Assert(image.data);

	float data[] = {
		1 / 9.f,1 / 9.f,1 / 9.f,
		1 / 9.f,1 / 9.f,1 / 9.f,
		1 / 9.f,1 / 9.f,1 / 9.f
	};

	Mat mask(3, 3, CV_32F, data);
	Mat blur;
	filter(image, blur, mask);
	blur.convertTo(blur, CV_8U);

	namedWindow("image", WINDOW_NORMAL), namedWindow("blur", WINDOW_NORMAL);
	imshow("image", image), imshow("blur", blur);

}


void COpenCVDlg::OnBnClickedButton36()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 출력화소에서 이웃 화소끼리 차이를 크게 해서 날카로운 느낌이 나게 만드는 것
	// 마스크의 중심계수의 비중을 크게 만든다

	Mat image = imread("Test.jpg", IMREAD_GRAYSCALE);
	CV_Assert(image.data);

	float data1[] = {
		0,-1,0,
		-1,5,-1,
		0,-1,0
	};

	float data2[] = {
		-1,-1,-1,
		-1,9,-1,
		-1,-1,-1
	};

	Mat mask1(3, 3, CV_32F, data1);
	Mat mask2(3, 3, CV_32F, data2);
	Mat sharpen1, sharpen2;
	filter(image, sharpen1, mask1);
	filter(image, sharpen2, mask2);
	sharpen1.convertTo(sharpen1, CV_8U);
	sharpen2.convertTo(sharpen2, CV_8U);

	namedWindow("image", WINDOW_NORMAL);
	imshow("image", image);
	namedWindow("s1", WINDOW_NORMAL);
	namedWindow("s2", WINDOW_NORMAL);
	imshow("s1", sharpen1);
	imshow("s2", sharpen2);

}

void homogenOp(Mat img, Mat& dst, int mask_size)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));
	Point h_m(mask_size / 2, mask_size / 2);

	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			float max = 0;
			for (int u = 0; u < mask_size; u++)
			{
				for (int v = 0; v < mask_size; v++)
				{
					int y = i + u - h_m.y;
					int x = j + v - h_m.x;
					float difference = abs(img.at<uchar>(i, j) - img.at<uchar>(y, x));
					if (difference > max) max = difference;
				}
			}
			dst.at<uchar>(i, j) = max;
		}
	}
}

void differOp(Mat img, Mat&dst, int mask_size)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));
	Point h_m(mask_size / 2, mask_size / 2);
	int mask_length = mask_size * mask_size;

	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			vector<uchar> mask(mask_length, 0);
			for (int u = 0, k = 0; u < mask_size; u++)
			{
				for (int v = 0; v < mask_size; v++, k++)
				{
					int y = i + u - h_m.y;
					int x = j + v - h_m.x;
					mask[k] = img.at<uchar>(y, x);
				}
			}

			uchar max = 0;
			for (int k = 0; k < mask_length / 2; k++)
			{
				int start = mask[k];
				int end = mask[mask_length - k - 1];

				uchar difference = abs(start - end);
				if (difference > max) max = difference;
			}
			dst.at<uchar>(i, j) = max;
		}
	}
}
void COpenCVDlg::OnBnClickedButton37()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 화소값이 급격하게 변화하는 부분

	// 단순하고 빠른 에지 검출 방법으로는 유사 연산자와 차 연산자 방법
	// 1. 유사 연산자 : 중심화소에서 각 방향의 주변 화소와 차분을 계산하고 그 중
	// 가장 큰 값을 출력화소로 결정하는 방법

	// 2. 차 연산자 : 중심화소를 배제하고 주변 화소의 상하 차분, 좌우 차분, 대각선의 차분을 게산하고
	// 그 중 가장 큰 값을 출력화소로 결정하는 방법

	Mat image = imread("Apple.jpg", 0);
	CV_Assert(image.data);

	Mat edge1, edge2;
	homogenOp(image, edge1, 3);
	differOp(image, edge2, 3);

	namedWindow("edge1", WINDOW_NORMAL); namedWindow("edge2", WINDOW_NORMAL);
	imshow("edge1", edge1); imshow("edge2", edge2);

}

/*
1차 미분 마스크
에지가 화소의 밝기가 급격히 변하는 부분이기 때문에 함수의 변화율을 취하는 미분 연산을 이용
이산연산 -> 2차원 공간상의 한 화소에서 수평 방향과 수직 방향으로 각각 미분, (편미분)

y방향 미분 마스크		x방향 미분 마스크

0  0  0					0  0  0
0 -1  0					0 -1  1
0  1  0					0  0  0

f(x,y) , f(x,y+1)		f(x,y) , f(x+1,y)
*/

void differential(Mat image, Mat& dst, float data1[], float data2[])
{
	Mat dst1, dst2;
	Mat mask1(3, 3, CV_32F, data1);
	Mat mask2(3, 3, CV_32F, data2);

	filter(image, dst1, mask1);
	filter(image, dst2, mask2);
	magnitude(dst1, dst2, dst); // 회선 결과 두 행렬의 크기 계산

	dst1 = abs(dst1);
	dst2 = abs(dst2);

	dst.convertTo(dst, CV_8U); // 윈도우 표시 위한 형변환
	dst1.convertTo(dst1, CV_8U);
	dst2.convertTo(dst2, CV_8U);

	imshow("dst1", dst1);
	imshow("dst2", dst2);
}

void differential2(Mat image, Mat& dst, float data1[], float data2[])
{
	Mat dst1, dst2;
	Mat mask1(3, 3, CV_32F, data1);
	Mat mask2(3, 3, CV_32F, data2);

	filter2D(image, dst1, CV_32F, mask1);
	filter2D(image, dst2, CV_32F, mask2);
	magnitude(dst1, dst2, dst); // 회선 결과 두 행렬의 크기 계산

	dst1 = abs(dst1);
	dst2 = abs(dst2);

	dst.convertTo(dst, CV_8U); // 윈도우 표시 위한 형변환
	dst1.convertTo(dst1, CV_8U);
	dst2.convertTo(dst2, CV_8U);

	imshow("dst1", dst1);
	imshow("dst2", dst2);
}

void COpenCVDlg::OnBnClickedButton38()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/* 로버츠 마스크는 대각으로 마스크 배치

	O(i,j) = root(Gx^2 + Gy^2)

	Gx      Gy
	-1 0 0	0 0 -1
	0 1 0  0 1 0
	0 0 0  0 0 0

	나머지 원소 값이 0이어서 다른 1차 마스크에 비해 빠른 수행속도,
	한번만 차분하기 때문에 차분의 크기가 작고(엣지가 가늘다),
	이로 인해 경계가 확실한 에지만 추출하며 잡음에 매우 민감
	*/


	Mat image = imread("Apple.jpg", 0);
	CV_Assert(image.data);

	float data1[] = { -1,0,0,
		0,1,0,
		0,0,0 };
	float data2[] = { 0, 0, -1,
		0,1,0,
		0,0,0 };

	Mat dst;
	differential(image, dst, data1, data2);

	imshow("image", image);
	imshow("로버츠 에지", dst);
}


void COpenCVDlg::OnBnClickedButton39()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/*
	로버츠 마스크의 단점을 보완하기 위해 고안
	수직 마스크라고도 하며 수직/수평으로 각각 3번 차분 계산
	3번의 차분을 합하기 때문에 엣지의 강도가 강하며 수직과 수평 에지를 동등하게 찾는데 효과적
	*/

	Mat image = imread("Apple.jpg", 0);
	CV_Assert(image.data);

	float data1[] = { -1,0,1,
		-1,0,1,
		-1,0,1 };
	float data2[] = { -1, -1, -1,
		0,0,0,
		1,1,1 };

	Mat dst;
	differential2(image, dst, data1, data2);

	imshow("image", image);
	imshow("프리윗 에지", dst);
}


void COpenCVDlg::OnBnClickedButton40()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/*
	프리윗 마스크와 유사하지만
	중심화소의 차분에 대한 비중을 2배로 키운 것이 특징
	수직, 수평 방향의 에지도 잘 추출하며, 중심화소의 차분 비중을 높였기 때문에
	대각선 방향의 에지도 잘 검출

	필요에 따라서 한 방향의 에지만 검출해서 활용하는 방식도 있을 것이다
	*/


	Mat image = imread("Apple.jpg", 0);
	CV_Assert(image.data);

	float data1[] = { -1,0,1,
		-2,0,2,
		-1,0,1 };
	float data2[] = { -1, -2, -1,
		0,0,0,
		1,2,1 };

	Mat dst, dst3, dst4;
	differential2(image, dst, data1, data2);

	Sobel(image, dst3, CV_32F, 1, 0, 3);	// x방향 미분 
	Sobel(image, dst4, CV_32F, 0, 1, 3);	// y방향 미분 
	convertScaleAbs(dst3, dst3);			// 절댓값 및 uchar 형변환
	convertScaleAbs(dst4, dst4);

	imshow("image", image);
	imshow("소벨 에지", dst);
	imshow("소벨 에지_수직_opencv", dst3);
	imshow("소벨 에지_수평_opencv", dst4);
}


void COpenCVDlg::OnBnClickedButton41()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/*
	1차 미분 연산자는 밝기가 급격하게 변화하는 영역 뿐만 아니라
	점진적으로 변화하는 부분까지 민감하게 에지를 검출하여 너무 많은 에지가 나타날 수 있다

	2차 미분 연산자는 변화하는 영역의 중심에 위치한 에지만을 검출하며, 밝기가 점진적으로
	변화되는 영역에 대해서는 반응을 보이지 않는다

	라플라시안 마스크는 1차 미분한 결과를 한번 더 미분하게 됨

	4방향 마스크 (수직,수평)

	0 -1 0		0 1 0
	-1 4 -1		1 -4 1
	0 -1 0		0 1 0

	8방향 마스크 (수직,수평,대각)

	-1 -1 -1		1 1 1
	-1 8 -1			1 -8 1
	-1 -1 -1		1 1 1
	*/


	Mat image = imread("Test.jpg", 0);
	CV_Assert(image.data);

	short data1[] = { 0,1,0,
		1,-4,1,
		0,1,0 };
	short data2[] = { -1, -1, -1,
		-1,8,-1,
		-1,-1,-1 };

	Mat dst1, dst2, dst3;
	Mat mask4(3, 3, CV_16S, data1);
	Mat mask8(3, 3, CV_16S, data2);

	filter2D(image, dst1, CV_16S, mask4);
	filter2D(image, dst2, CV_16S, mask8);
	Laplacian(image, dst3, CV_16S, 1);

	convertScaleAbs(dst1, dst1);
	convertScaleAbs(dst2, dst2);
	convertScaleAbs(dst3, dst3);

	namedWindow("image", WINDOW_NORMAL);
	namedWindow("filter2D_4", WINDOW_NORMAL);
	namedWindow("filter2D_8", WINDOW_NORMAL);
	namedWindow("Opencv_Laplacian", WINDOW_NORMAL);

	imshow("image", image);
	imshow("filter2D_4", dst1);
	imshow("filter2D_8", dst2);
	imshow("Opencv_Laplacian", dst3);
}

Mat getLoGmask(Size size, double sigma)
{
	double ratio = 1 / (CV_PI * pow(sigma, 4.0));
	int center = size.height / 2;
	Mat dst(size, CV_64F);

	for (int i = 0; i < size.height; i++) {
		for (int j = 0; j < size.width; j++)
		{
			int x2 = (j - center)*(j - center);
			int y2 = (i - center)*(i - center);
			double value = (x2 + y2) / (2 * sigma*sigma);
			dst.at<double>(i, j) = -ratio * (1 - value)* exp(-value);
		}
	}

	double scale = (center * 10 / ratio);
	return dst* scale;
}

void COpenCVDlg::OnBnClickedButton42()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/*
	라플라시안은 잡음에 민감하므로 잡음을 먼저 제거하고 라플라시안을 수행해야 잡음에 강한 에지 검출이 가능하다

	잡음 제거의 수단이 다양하기에 미디언 필터, 최대/최솟값 필터링 등을 수행 할 수 있다
	이런 방법들은 비선형 필터이기 때문에 잡음제거를 수행하고 에지 검출을 수행해야함 (속도 문제)

	- LoG
	잡음을 제거하는 다른 방법으로 선형 공간 필터를 선택하여 회선을 하고, 그 후 라플라시안 마스크로 회선하는 방법은
	두 필터 모두 선형 필터이기 때문에 단일 마스크로 연산이 가능하다 (속도 개선 가능)

	수식에 따라 마스크 계수를 생성할 때 값의 범위가 너무 작은 관계로 전체 계수의 합이 0에 가까워지도록 스케일 조정 필요

	- DoG
	가우시안 스무딩 필터링의 차이를 이용하여 에지를 검출, 두 개의 표준 편차를 이용해서 가우시안 마스크를 만들고
	그 차이가 DoG 마스크가 된다

	각 표준 편차의 값을 조절하여 검출할 에지의 넓이를 조절 할 수 있다.
	*/

	Mat image = imread("Test.jpg", 0);
	CV_Assert(image.data);

	double sigma = 1.4;
	Mat LoG_mask = getLoGmask(Size(9, 9), sigma);

	// LoG
	Mat dst1, dst2, dst3, dst4, gaus_img;
	filter2D(image, dst1, -1, LoG_mask);	// LoG 마스크 적용

											// LoG
	GaussianBlur(image, gaus_img, Size(9, 9), sigma, sigma);
	Laplacian(gaus_img, dst2, -1, 5);

	// DoG
	GaussianBlur(image, dst3, Size(1, 1), 0.0);
	GaussianBlur(image, dst4, Size(9, 9), 1.6);
	Mat dst_DoG = dst3 - dst4;
	normalize(dst_DoG, dst_DoG, 0, 255, CV_MINMAX);


	namedWindow("image", WINDOW_NORMAL);
	namedWindow("dst1 - LoG_Filter2D", WINDOW_NORMAL);
	namedWindow("dst2 - LoG_Opencv", WINDOW_NORMAL);
	namedWindow("dst_Dog - DoG_Opencv", WINDOW_NORMAL);

	imshow("image", image);
	imshow("dst1 - LoG_Filter2D", dst1);
	imshow("dst2 - LoG_Opencv", dst2);
	imshow("dst_Dog - DoG_Opencv", dst3);
}


void calc_direct(Mat Gy, Mat Gx, Mat& direct)
{
	direct.create(Gy.size(), CV_8U);

	for (int i = 0; i < direct.rows; i++)
	{
		for (int j = 0; j < direct.cols; j++)
		{
			float gx = Gx.at<float>(i, j);
			float gy = Gy.at<float>(i, j);
			int theat = int(fastAtan2(gy, gx) / 45);	// 45도 근사
			direct.at<uchar>(i, j) = theat % 4;		// 4단계 근사
		}
	}
}

void supp_nonMax(Mat sobel, Mat direct, Mat& dst)
{
	dst = Mat(sobel.size(), CV_32F, Scalar(0));

	for (int i = 1; i < sobel.rows - 1; i++)
	{
		for (int j = 1; j < sobel.cols - 1; j++)
		{
			int dir = direct.at<uchar>(i, j);
			float v1, v2;
			if (dir == 0)
			{
				v1 = sobel.at<float>(i, j - 1);
				v2 = sobel.at<float>(i, j + 1);
			}
			else if (dir == 1)
			{
				v1 = sobel.at<float>(i + 1, j + 1);
				v2 = sobel.at<float>(i - 1, j - 1);
			}

			else if (dir == 2)
			{
				v1 = sobel.at<float>(i - 1, j);
				v2 = sobel.at<float>(i + 1, j);
			}

			else if (dir == 3)
			{
				v1 = sobel.at<float>(i + 1, j - 1);
				v2 = sobel.at<float>(i - 1, j + 1);
			}

			float center = sobel.at<float>(i, j);
			dst.at<float>(i, j) = (center > v1 && center > v2) ? center : 0;
		}
	}
}

void trace(Mat max_so, Mat& pos_ck, Mat& hy_img, Point pt, int low)	// 에지 추적
{
	Rect  rect(Point(0, 0), pos_ck.size());	// 영상 범위 사각형
	if (!rect.contains(pt)) return;	// 추적화소의 영상 범위 확인

	if (pos_ck.at<uchar>(pt) == 0 && max_so.at<float>(pt) > low)
	{
		pos_ck.at<uchar>(pt) = 1;	// 해당 좌표 추적 완료 표시
		hy_img.at<uchar>(pt) = 255;			// 에지 지정

		trace(max_so, pos_ck, hy_img, pt + Point(-1, -1), low);
		trace(max_so, pos_ck, hy_img, pt + Point(0, -1), low);
		trace(max_so, pos_ck, hy_img, pt + Point(+1, -1), low);
		trace(max_so, pos_ck, hy_img, pt + Point(-1, 0), low);

		trace(max_so, pos_ck, hy_img, pt + Point(+1, 0), low);
		trace(max_so, pos_ck, hy_img, pt + Point(-1, +1), low);
		trace(max_so, pos_ck, hy_img, pt + Point(0, +1), low);
		trace(max_so, pos_ck, hy_img, pt + Point(+1, +1), low);
	}
}

void hysteresis_th(Mat max_so, Mat& hy_img, int low, int high) // 이력 임계값 수정
{
	Mat pos_ck(max_so.size(), CV_8U, Scalar(0));
	hy_img = Mat(max_so.size(), CV_8U, Scalar(0));

	for (int i = 0; i < max_so.rows; i++)
	{
		for (int j = 0; j < max_so.cols; j++)
		{
			if (max_so.at<float>(i, j) > high)
				trace(max_so, pos_ck, hy_img, Point(j, i), low);
		}
	}
}


void COpenCVDlg::OnBnClickedButton43()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	/*
	Canny Edge
	영상 내에서 다른 부분과 경계를 이루는 경우가 많다. 그러다 보니 대부분의 에지 검출 방법이
	이 잡음들을 에지로 검출, 이런 문제를 보완하기 위해 고안 된 방법

	1. 블러링을 통한 노이즈 제거 (가우시안 블러링)
	- 5x5 크기의 필터 적용, 불필요 노이즈 제거를 위한 필터이므로 다른 필터를 사용해도 무관

	2. 화소 기울기의 강도와 방향 검출 (소벨 마스크)
	- 화소의 기울기 검출에는 가로 방향과 세로 방향의 소벨 마스크로 회선을 적용하고, 회선이 완료된 행렬을 이용해서
	화소 기울기의 크기와 방향을 계산
	3. 비최대치 억제 (non-maximum suppression)
	- 현재 화소가 이웃하는 화소들보다 크면 에지로 보존, 그렇지 않으면 에지가 아닌 것으로 간주해서 제거
	비최대치를 억제하여도 에지가 아닌 것이 에지로 결정된 경우가 많이 존재, 이를 위해
	정확한 에지만을 검출하여 에지가 끊어지는 것을 방지하는 압법으로 이력 임계값을 사용

	4. 이력 임계값(hysteresis threshold)으로 에지 결정
	- 두 임계값을 사용해서 에지의 이력을 추적하여 에지를 결정하는 방법, 높은 임계값보다 크면 에지를 추적,
	추적을 시작하면 추적하지 않은 이웃 화소들을 대상으로 낮은 임계값보다 큰 화소를 에지로 결정

	*/


	Mat image = imread("Apple.jpg", 0);
	CV_Assert(image.data);
	Mat gau_img, Gx, Gy, direct, sobel, max_sobel, hy_img, canny;

	// Func
	GaussianBlur(image, gau_img, Size(5, 5), 0.3);
	Sobel(gau_img, Gx, CV_32F, 1, 0, 3);
	Sobel(gau_img, Gy, CV_32F, 0, 1, 3);
	sobel = abs(Gx) + abs(Gy);

	calc_direct(Gy, Gx, direct);
	supp_nonMax(sobel, direct, max_sobel);
	hysteresis_th(max_sobel, hy_img, 100, 150);
	magnitude(Gx, Gy, sobel);

	// Opencv 
	Canny(image, canny, 100, 150);

	namedWindow("image", WINDOW_NORMAL);
	namedWindow("canny", WINDOW_NORMAL);
	namedWindow("Opencv_canny", WINDOW_NORMAL);

	imshow("image", image);
	imshow("canny", hy_img);
	imshow("Opencv_canny", canny);

}

void minMaxFilter(Mat img, Mat& dst, int size, int flag = 1)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));
	Size msize(size, size);
	Point h_m = msize / 2;

	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			Point start = Point(j, i) - h_m;
			Rect roi(start, msize);
			Mat mask = img(roi);

			double minVal, maxVal;
			minMaxLoc(mask, &minVal, &maxVal);
			dst.at<uchar>(i, j) = (flag) ? maxVal : minVal;
		}
	}
}


void COpenCVDlg::OnBnClickedButton44()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 최댓값 필터는 마스크 계수 중 최댓값을 통과, 최솟값 필터는 마스크 계수 중 최솟값 통과
	// 최댓값 필터링은 가장 큰값인 밝은 색들로 출력화소가 구성되기 때문에 돌출되는 어두운 값이 제거되며 
	// 전체적으로 밝음, 최솟값은 반대

	// 최댓값은 밝은 임펄스 잡음이 강조되며, 최솟값 필터는 어두운 임펄스 잡음이 강조될 수 있다.
	// 경우에 따라서 높은 대조를 가진 영상에서 특징을 확대시키기 위한 기법으로 이용

	Mat image = imread("Test.jpg", 0);

	Mat min_img, max_img;
	minMaxFilter(image, min_img, 5, 0);
	minMaxFilter(image, max_img, 5, 1);

	imshow("image", image);
	imshow("minFilter", min_img);
	imshow("maxFilter", max_img);

}

void averageFilter(Mat img, Mat& dst, int size)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));

	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			Point pt1 = Point(j - size / 2, i - size / 2);
			Point pt2 = pt1 + (Point)Size(size, size);

			if (pt1.x < 0) pt1.x = 0;
			if (pt1.y < 0) pt1.y = 0;
			if (pt2.x > img.cols) pt2.x = img.cols;
			if (pt2.y > img.rows) pt2.y = img.rows;

			Rect mask_rect(pt1, pt2);
			Mat mask = img(mask_rect);
			dst.at<uchar>(i, j) = (uchar)mean(mask)[0];
		}
	}
}

void COpenCVDlg::OnBnClickedButton45()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 마스크로 씌워진 영역의 입력화소들을 가져와서 그 화소들의 평균을 구하여 출력화소로 지정하는 방법

	Mat image = imread("Test.jpg", 0);

	Mat avg_img, blur_img, box_img;
	averageFilter(image, avg_img, 5);
	blur(image, blur_img, Size(5, 5));
	boxFilter(image, box_img, -1, Size(5, 5));

	// BORDER 타입 (마스크를 넘어가는 영역 패딩값을 어떤걸로 지정할지)

	imshow("image", image);
	imshow("blur_img", blur_img);
	imshow("avg_img", avg_img);
	imshow("box_img", box_img);
}


void COpenCVDlg::OnBnClickedButton46()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 마스크 내 화소값을 정렬하여 가운데 값을 취하는 필터
	// 일정 영역에서 다른 화소들과 밝기가 심하게 차이가 나는 임펄스 잡음 or 솔트페퍼 잡음을 잘 제거해준다
	// 평균 필터를 이용한 필터링에 비하면 블러링 현상이 적다.
	// 마스크 크기가 커지면 잡음 제거 기능은 향상되지만 정렬 알고리즘 수행 시간 때문에 수행 시간이 기하급수적으로 늘어난다

	// 명암도 영상에서도 효과적으로 수행된다
	Mat image = imread("Test.jpg", IMREAD_COLOR);

	Mat gray, med_img;
	cvtColor(image, gray, CV_BGR2GRAY);
	medianBlur(gray, med_img, 5);

	imshow("gray", gray);
	imshow("median", med_img);
}


void COpenCVDlg::OnBnClickedButton47()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 영상의 세세한 부분을 회선을 통해서 부드럽게 하는 기법으로 블러링과 같은 의미
	// 정규 분포는 특정 값의 출현 비율을 그래프로 그렸을 때, 평균에서 가장 큰 수치를 가지며
	// 표준 편차가 커지면 그래프의 폭이 넓어지고, 표준 편차가 작아지면 폭이 좁아진다

	// 표준편차가 클수록 평균의 높이는 낮아지고 폭이 넓어짐 
	// -> 블러링 마스크와 유사하게 만들어진다 (결과 영상 중심화소와 비슷한 비중으로 주변 화소 반영, 흐름이 심해짐)
	// 표준편차가 작을수록 평균의 높이가 높아지고 폭이 좁아짐
	// -> 영상의 중심화소 비중이 커지기 때문에 흐림의 정도가 약화

	Mat image = imread("Test.jpg", 0);
	CV_Assert(image.data);

	Size size(5, 21);
	double sigmaX = 0.3*((size.width - 1)*0.5 - 1) + 0.8;
	double sigmaY = 0.3*((size.height - 1)*0.5 - 1) + 0.8;

	Mat gauss_img1, gauss_img2, gauss_img3;
	Mat gaussian_1dx = getGaussianKernel(size.width, -1, CV_64F);
	Mat gaussian_1dy = getGaussianKernel(size.height, -1, CV_64F);

	GaussianBlur(image, gauss_img1, size, sigmaX, sigmaY);
	GaussianBlur(image, gauss_img3, size, sigmaX - 0.8, sigmaY - 2.4);
	sepFilter2D(image, gauss_img2, -1, gaussian_1dx, gaussian_1dy);

	imshow("image", image);
	imshow("가우시안 블러링", gauss_img1);
	imshow("가우시안 계수로 마스크", gauss_img2);
	imshow("가우시안 블러링 시그마 더작음", gauss_img3);
}

bool check_match(Mat img, Point start, Mat mask, int mode = 0)
{
	for (int u = 0; u < mask.cols; u++)
	{
		for (int v = 0; v < mask.cols; v++)
		{
			Point pt(v, u);
			int m = mask.at<uchar>(pt);	// 마스크 계수
			int p = img.at<uchar>(start + pt);	// 해당 위치 입력화소

			bool ch = (p == 255);	// 계수와 화소값 일치 비교ㅕ
			if (m == 1 && ch == mode)
				return false;
		}
	}

	return true;
}

void erosion(Mat img, Mat& dst, Mat mask)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));
	if (mask.empty()) mask = Mat(3, 3, CV_8UC1, Scalar(1));

	Point h_m = mask.size() / 2;	// 마스크 절반 크기
	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			Point start = Point(j, i) - h_m;
			bool check = check_match(img, start, mask, 0);
			dst.at<uchar>(i, j) = (check) ? 255 : 0;
		}
	}
}

void COpenCVDlg::OnBnClickedButton48()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 침식 연산은 말 그대로 객체를 침식시키는 연산
	// 객체의 크기는 축소되고 배경은 확장, 임펄스 잡음 제거 용이
	// 객체의 돌출부를 감소시키기 때문에 서로 닿는 물체를 분리할 때에도 유용
	// 침식 마스크와 원소간에 일치하는지 비교하여 1개 이상 불일치하면 0, 모두 일치하면 1

	Mat image = imread("SP.jpg", 0);
	Mat th_img, dst1, dst2;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	uchar data[] = { 1,1,1,1,1,
		1,1,1,1,1,
		1,1,1,1,1,
		1,1,1,1,1,
		1,1,1,1,1 };
	Mat mask(5, 5, CV_8UC1, data);

	erosion(th_img, dst1, (Mat)mask);
	morphologyEx(th_img, dst2, MORPH_ERODE, mask);

	imshow("이진 영상", th_img);
	imshow("User_dilation", dst1);
	imshow("Opencv_dilation", dst2);
}

void dilation(Mat img, Mat& dst, Mat mask)
{
	dst = Mat(img.size(), CV_8U, Scalar(0));
	if (mask.empty())	mask = Mat(3, 3, CV_8UC1, Scalar(0));

	Point h_m = mask.size() / 2;
	for (int i = h_m.y; i < img.rows - h_m.y; i++)
	{
		for (int j = h_m.x; j < img.cols - h_m.x; j++)
		{
			Point start = Point(j, i) - h_m;
			bool check = check_match(img, start, mask, 1);
			dst.at<uchar>(i, j) = (check) ? 0 : 255;	// 침식 연산과 반대
		}
	}
}

void COpenCVDlg::OnBnClickedButton49()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 객체의 최외곽 화소를 확장, 마스크가 1인 원소와 해당 입력화소가 모두 불일치 하면 0, 
	// 하나라도 일치하게되면 1이 출력화소로 결정

	Mat image = imread("SP.jpg", 0);
	Mat th_img, dst1, dst2;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	Matx<uchar, 3, 3> mask;
	mask << 0, 1, 0,
		1, 1, 1,
		0, 1, 1;

	dilation(th_img, dst1, (Mat)mask);
	morphologyEx(th_img, dst2, MORPH_DILATE, mask);

	imshow("image", th_img);
	imshow("User_dilation", dst1);
	imshow("CV_dilation", dst2);
}

void opening(Mat img, Mat& dst, Mat mask)
{
	Mat tmp;
	erosion(img, tmp, mask);
	dilation(tmp, dst, mask);
}

void closing(Mat img, Mat& dst, Mat mask)
{
	Mat tmp;
	dilation(img, tmp, mask);
	erosion(tmp, dst, mask);
}
void COpenCVDlg::OnBnClickedButton50()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 침식, 팽창 연산의 순서를 조합하여 수행

	Mat image = imread("SP.jpg", 0);
	CV_Assert(image.data);
	Mat th_img, dst1, dst2, dst3, dst4;
	threshold(image, th_img, 128, 255, THRESH_BINARY);

	Matx<uchar, 3, 3> mask;
	mask << 0, 1, 0,
		1, 1, 1,
		0, 1, 0;

	opening(th_img, dst1, (Mat)mask);
	closing(th_img, dst2, (Mat)mask);
	morphologyEx(th_img, dst3, MORPH_OPEN, mask);
	morphologyEx(th_img, dst4, MORPH_CLOSE, mask);

	imshow("User_opne", dst1); imshow("User_close", dst2);
	imshow("Cv_open", dst3); imshow("Cv_close", dst4);
}

void scaling(Mat img, Mat& dst, Size size)
{
	dst = Mat(size, img.type(), Scalar(0));
	double ratioY = (double)size.height / img.rows;
	double ratioX = (double)size.width / img.cols;

	for (int i = 0; i < img.rows; i++)
	{
		for (int j = 0; j < img.cols; j++)
		{
			int x = (int)(j*ratioX);
			int y = (int)(i*ratioY);
			dst.at<uchar>(y, x) = img.at<uchar>(i, j);
		}
	}
}

void COpenCVDlg::OnBnClickedButton51()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 단순 비율 변경으로 크기 변환
	Mat image = imread("Test.jpg");

	Mat dst1, dst2;
	scaling(image, dst1, Size(150, 200));
	scaling(image, dst2, Size(300, 400));

	imshow("image", image);
	imshow("dst1-축소", dst1);
	imshow("dst2-,확대", dst2);
	resizeWindow("dst1-축소", 200, 200);
}

void scaling_nearest(Mat img, Mat& dst, Size size)
{
	dst = Mat(size, CV_8U, Scalar(0));
	double ratioY = (double)size.height / img.rows;
	double ratioX = (double)size.width / img.cols;

	for (int i = 0; i < dst.rows; i++)
	{
		for (int j = 0; j < dst.cols; j++)
		{
			int x = (int)cvRound(j / ratioX);
			int y = (int)cvRound(i / ratioY);
			dst.at<uchar>(i, j) = img.at<uchar>(y, x);
		}
	}
}

void COpenCVDlg::OnBnClickedButton52()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// Interpolation에는 bilinear, cubic, lagrangian 등 여러 보간법이 존재한다

	// Nearest Neighbor Interpolation
	// Interpolation할 때 비어 있는 Hole을 목적영상의 화소에 가장 가깝게 이웃한 입력영상의 화소값을 가져오는 방법

	Mat image = imread("Test.jpg");

	Mat dst1, dst2;
	scaling(image, dst1, Size(300, 300)); // 크기변경 기본
	scaling_nearest(image, dst2, Size(300, 300)); // 크기변경 최근접 이웃

	imshow("image", image);
	imshow("dst1-순방향사상", dst1);
	imshow("dst2-최근접 이웃보간", dst2);
}


void COpenCVDlg::OnBnClickedButton53()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat img = imread("Test.jpg");

	Mat dst1, dst2, dst3, dst4, dst5;

	resize(img, dst1, Size(300, 300), 0, 0, INTER_NEAREST);	// 최근접
	resize(img, dst2, Size(300, 300), 0, 0, INTER_LINEAR);	// 양선형
	resize(img, dst3, Size(300, 300), 0, 0, INTER_CUBIC);	// 바이큐빅 (4x4 이웃 화소)
	resize(img, dst4, Size(300, 300), 0, 0, INTER_AREA);	// 픽셀영역관계로 리샘플링	BEST!
	resize(img, dst5, Size(300, 300), 0, 0, INTER_LANCZOS4); // Lanczos 보간 8x8이웃 화소

	imshow("image", img);
	imshow("NEAREST", dst1);
	imshow("LINEAR", dst2);
	imshow("CUBIC", dst3);
	imshow("AREA", dst4);
	imshow("LANCZO", dst5);


}


void COpenCVDlg::OnBnClickedButton54()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 회전과 평행이동까지 포함한 행렬(2x3)으로 행렬을 구성하는 것을 어파인 변환(Affine Transform)이라 한다

	Mat img = imread("Test.jpg");

	Point2f pt1[3] = { Point2f(10,200), Point2f(200,150), Point2f(300,300) };
	Point2f pt2[3] = { Point2f(10,10), Point2f(250,10), Point2f(300,300) };
	Point center(img.cols / 2, img.rows / 2);
	double angle = 30;
	double scale = 1;

	Mat aff_map = getAffineTransform(pt1, pt2);
	Mat rot_map = getRotationMatrix2D(center, angle, scale);

	Mat dst1, dst2;
	warpAffine(img, dst1, aff_map, img.size(), INTER_LINEAR);
	warpAffine(img, dst2, rot_map, img.size(), INTER_LINEAR);

	for (int i = 0; i < 3; i++)
	{
		circle(img, pt1[i], 3, Scalar(0, 0, 255), 2);
		circle(dst1, pt2[i], 3, Scalar(0, 0, 255), 2);
	}

	imshow("image", img);
	imshow("aff_map", dst1);
	imshow("rot_map", dst2);
}

Point2f pts[4], small(10, 10);
Mat image;

void draw_rect(Mat image)
{
	Rect img_rect(Point(0, 0), image.size());
	for (int i = 0; i < 4; i++)
	{
		Rect rect(pts[i] - small, pts[i] + small);
		rect &= img_rect; // 교차역역 계산
		image(rect) += Scalar(70, 70, 70);
		line(image, pts[i], pts[(i + 1) % 4], Scalar(255, 0, 255), 1);
		rectangle(image, rect, Scalar(255, 255, 0), 1);
	}
	imshow("select rect", image);
}

void warp(Mat image)
{
	Point2f dst_pts[4] = {
		Point(0,0), Point2f(350,0),
		Point2f(350,350), Point2f(0,350)
	};
	Mat dst;
	Mat perspect_mat = getPerspectiveTransform(pts, dst_pts);
	warpPerspective(image, dst, perspect_mat, Size(350, 350), INTER_CUBIC);
	imshow("왜곡보정", dst);
}

void onMouse(int event, int x, int y, int flags, void*)
{
	Point curr_pt(x, y);
	static int check = -1;

	if (event == EVENT_LBUTTONDOWN)
	{
		for (int i = 0; i < 4; i++)
		{
			Rect rect(pts[i] - small, pts[i] + small);
			if (rect.contains(curr_pt)) check = i;
		}


		if (event == EVENT_LBUTTONUP)
			check = -1;

		if (check >= 0)
		{
			pts[check] = curr_pt;
			draw_rect(image.clone());
			warp(image.clone());
		}
	}

}

void COpenCVDlg::OnBnClickedButton55()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 입력영상의 4개 좌표와 변경하고자 하는 목적영상 4개 좌표를 지정하여 원근변환 행렬을 계산
	// getPerspectiveTransform(0 함수는 4개의 좌표쌍으로부터 원근변환 행렬 계산
	// warpPerspective() 함수는 원근변환 행렬에 따라서 원근변환을 수행
	// transform() 함수는 입력영상의 4개의 좌표와 원근 행렬을 인수로 입력하면 원근 변환된 좌표를 반환
	// 반환된 결과가 동차좌표이기 때문에 직표 좌료로 만들기 위해서는 각 좌표의 마지막 원소인 w로 각 좌표의 원소를 나눠줘야한다

	image = imread("AffineTest.jpg");
	imshow("image", image);
	pts[0] = Point2f(100, 100), pts[1] = Point2f(300, 100);
	pts[2] = Point2f(300, 300), pts[3] = Point2f(100, 300);
	draw_rect(image.clone());
	setMouseCallback("select rect", onMouse, 0);

}


void log_mag(Mat complex_mat, Mat& dst)
{
	Mat planes[2];
	split(complex_mat, planes);				// 2채널 복소 행렬 분리
	magnitude(planes[0], planes[1], dst);	// 크기 계산
	log(dst + 1, dst);
	normalize(dst, dst, 0, 255, CV_MINMAX);	// 정규화
	dst.convertTo(dst, CV_8U);
}

void shuffling(Mat mag_img, Mat& dst)
{
	int cx = mag_img.cols / 2;
	int cy = mag_img.rows / 2;
	Rect q1(cx, 0, cx, cy);	// 1사분면 
	Rect q2(0, 0, cx, cy);
	Rect q3(0, cy, cx, cy);
	Rect q4(cx, cy, cx, cy);

	dst = Mat(mag_img.size(), mag_img.type());
	mag_img(q1).copyTo(dst(q3));
	mag_img(q3).copyTo(dst(q1));
	mag_img(q2).copyTo(dst(q4));
	mag_img(q4).copyTo(dst(q2));
}

Mat DFT_1D(Mat one_row, int dir)	// 1차원 신호의 이산 푸리에 변환
{
	int N = one_row.cols;
	Mat dst(one_row.size(), CV_32FC2);

	for (int k = 0; k < N; k++)
	{
		Vec2f complex(0, 0);	// 1차원 입력 신호 조회
		for (int n = 0; n < N; n++)
		{
			float theta = dir * -2 * CV_PI * k * n / N;	// 기저함수의 각도 계산
			Vec2f value = one_row.at<Vec2f>(n);
			complex[0] += value[0] * cos(theta) - value[1] * sin(theta);
			complex[1] += value[1] * cos(theta) + value[0] * sin(theta);
		}
		dst.at<Vec2f>(k) = complex;
	}
	if (dir == -1) dst /= N;
	return dst;
}

void DFT_2D(Mat complex_img, Mat& dst, int dir)
{
	complex_img.convertTo(complex_img, CV_32F);
	Mat tmp(complex_img.size(), CV_32FC2, Vec2f(0, 0));
	tmp.copyTo(dst);

	for (int i = 0; i < complex_img.rows; i++) { // 가로방향 푸리에 변환
		Mat one_row = complex_img.row(i);
		Mat dft_row = DFT_1D(one_row, dir);		// 푸리에변환 결과 저장
		dft_row.copyTo(tmp.row(i));
	}

	transpose(tmp, tmp);	// 전치 수행 후 세로 방향 푸리에
	for (int i = 0; i < tmp.rows; i++)
	{
		Mat one_row = tmp.row(i);
		Mat dft_row = DFT_1D(tmp.row(i), dir);
		dft_row.copyTo(dst.row(i));
	}
	transpose(dst, dst);
}
void COpenCVDlg::OnBnClickedButton56()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 영상에서의 주파수는 공간상에서 화소 밝기의 변화율이라 할 수 있다. 이런 의미에서 공간 주파수라는 표현을 한다
	// 공간 주파수는 밝기가 얼마나 빨리 변화하는가에 따라서 고주파/저주파 영역으로 분류한다
	// 저주파 영역 => 변화율이 거의 없음(배경) , 고주파 영역 => 변화율이 심함(객체)
	// 저주파,고주파 영역을 분리해서 선별적으로 처리하기 어려움 , 주파수영역 변환

	// 푸리에 변환은 신호나 영상을 주파수 영역으로 변환하는 가장 일반적인 방법
	// DFT : Discrete Fourier Transform

	// 2차원 공간상의 영상에 이산 푸리에 변환을 적용하려면 다음 수식과 같이 1차원 이산푸리에 변환을
	// 가로방향과 세로방향으로 연속해서 두 번 적용해야 한다

	// 주파수 스펙트럼 영상은 자주파 영역의 계수값이 고주파 영역에 비해 상대적으로 너무크다
	// 이로 인해 일반적인 방법으로 정규화해서 영상으로 표현하면 최저주파 영역만 흰색으로 나타나고
	// 나머지는 거의 검은색으로 나타나기 때문에 계수값에 로그 함수를 적용하여 정규화한다.
	// void log_max(Mat complex_mat, Mat& dst)

	// DFT 수행 후 저주파 영역이 모서리 부분에 위치하고 고주파 부분이 중심부에 있는데
	// 좀 더 편하게 보기 위해 사분면의 위치를 바꿔주어 저주파에서 고주파 영역구분을 좀 더 쉽게 보게함
	// Shuffling

	Mat image = imread("TESTDFT.jpg", 0);
	CV_Assert(image.data);

	Mat complex_img, dft_coef, dft_img, idft_coef, shuffling_img, idft_img[2];
	Mat tmp[] = { image, Mat::zeros(image.size(), CV_8U) };
	merge(tmp, 2, complex_img);

	DFT_2D(complex_img, dft_coef, 1);
	log_mag(dft_coef, dft_img);
	shuffling(dft_img, shuffling_img);

	DFT_2D(dft_coef, idft_coef, -1);
	split(idft_coef, idft_img);
	idft_img[0].convertTo(idft_img[0], CV_8U);

	imshow("image", image);
	imshow("dtf_img", dft_img);
	imshow("shuffling_img", shuffling_img);
	imshow("idft_img", idft_img[0]);

}

Mat scramble(Mat signal)
{
	Mat dst = signal.clone();
	for (int i = 0, j = 0; i < dst.cols - 1; i++)
	{
		if (i > j) {
			swap(dst.at<Vec2f>(i), dst.at<Vec2f>(j));
		}

		int m = dst.cols >> 1;
		while ((j >= m) && (m >= 2))
		{
			j -= m;
			m >>= 1;
		}
		j += m;
	}
	return dst;
}

Mat zeropadding(Mat img)
{
	int m = 1 << (int)ceil(log2(img.rows)); // 2의 자승 계산
	int n = 1 << (int)ceil(log2(img.cols));
	Mat dst(m, n, img.type(), Scalar(0));

	Rect rect(Point(0, 0), img.size());
	img.copyTo(dst(rect));
	dst.convertTo(dst, CV_32F);
	return dst;
}

void butterfly(Mat& dst, int dir)
{
	int length = dst.cols;
	int pair = 1;
	for (int k = 0; k < ceil(log2(length)); k++)
	{
		int half_pair = pair;
		pair <= 1;
		float theta = dir*(-2.0 * CV_PI / pair);
		float wpr = -2.0 * sin(0.5*theta) * sin(0.5*theta);
		float wpi = sin(theta);
		float wre = 1.0;
		float wim = 0.0;

		for (int m = 0; m < half_pair; m++)
		{
			for (int even = m; even < length; even += pair)
			{
				int odd = even + half_pair;
				Vec2f G_even = dst.at<Vec2f>(even);
				Vec2f G_odd = dst.at<Vec2f>(odd);

				Vec2f G_odd_w(0.0);
				G_odd_w[0] = G_odd[0] * wre - G_odd[1] * wim;
				G_odd_w[1] = G_odd[1] * wre + G_odd[0] * wim;

				dst.at<Vec2f>(even) = G_even + G_odd_w;
				dst.at<Vec2f>(odd) = G_even - G_odd_w;
			}
			float tmp = wre;
			wre += tmp*wpr - wim*wpi;
			wim += wim*wpr + tmp*wpi;
		}
	}
	if (dir == -1) dst /= dst.cols;
}

void FFT_2D(Mat complex_img, Mat& dst, int dir)
{
	dst = Mat(complex_img.size(), complex_img.type());
	for (int i = 0; i < complex_img.rows; i++)
	{
		Mat scr_sn = scramble(complex_img.row(i));
		butterfly(scr_sn, dir);
		scr_sn.copyTo(dst.row(i));
	}

	transpose(dst, dst);
	for (int i = 0; i < dst.rows; i++)
	{
		Mat scr_sn = scramble(dst.row(i));
		butterfly(scr_sn, dir);
		scr_sn.copyTo(dst.row(i));
	}
	transpose(dst, dst);
}
void COpenCVDlg::OnBnClickedButton57()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// FFT : Fast Fourier Trasnform
	// 이산 푸리에 변환은 원본 신호의 한 원소에 곱해지는 기저 함수의 원소들을 원소 길이만큼 반복적으로 곱해야 하기 때문에 
	// 신호가 커질수록 계산 속도는 기하급수적으로 증가
	// FFT는 이 과정을 삼각함수의 주기성을 이용해 작은 단위로 분리해서 반복적으로 수행하고 합치도록 하여 효율성을 높이는 방법

	// 입력 신호에 대해서 짝수부와 홀수부로 계속적을 ㅗ분리하여 최종적으로 두 원소만 갖게끔 신호를 재배열 => scramble()
	Mat pad_img, complex_img, idft_img, img_tmp[2];
	Mat dft_coef1, dft_img1, shuffling_img1;
	Mat dft_coef2, dft_img2, shuffling_img2;

	Mat image = imread("TESTDFT.jpg", 0);

	pad_img = zeropadding(image);
	Mat tmp[] = { pad_img, Mat::zeros(pad_img.size(), pad_img.type()) };
	merge(tmp, 2, complex_img);

	//FFT_2D(complex_img, dft_coef1, 1);
	//log_mag(dft_coef1, dft_img1);
	//shuffling(dft_img1, shuffling_img1);

	dft(complex_img, dft_coef2, 0);
	log_mag(dft_coef2, dft_img2);
	shuffling(dft_img2, shuffling_img2);

	dft(dft_coef2, idft_img, DFT_INVERSE + DFT_SCALE);
	split(idft_img, img_tmp);
	img_tmp[0].convertTo(img_tmp[0], CV_8U);

	imshow("image", image);
	//imshow("shuffling_img", shuffling_img1);
	imshow("shuffling_img_OpenCV", shuffling_img2);
	imshow("idft_img", img_tmp[0]);

	// 영 삽입때문에 스펙트럼 영상이 더 크게 나옴
}

Mat get_lowpassFilter(Size size, int radius)
{
	Point center = size / 2;
	Mat filter(size, CV_32FC2, Vec2f(0, 0));
	circle(filter, center, radius, Vec2f(1, 1), -1);
	return filter;
}

Mat get_highpassFilter(Size size, int radius)
{
	Point center = size / 2;
	Mat filter(size, CV_32FC2, Vec2f(1, 1));
	circle(filter, center, radius, Vec2f(0, 0), -1);
	return filter;
}

void FFT(Mat image, Mat& dft_coef, Mat& dft_img)
{
	Mat complex_img;
	Mat pad_img = zeropadding(image);
	Mat tmp[] = { pad_img, Mat::zeros(pad_img.size(), pad_img.type()) };
	merge(tmp, 2, complex_img);
	//FFT_2D(complex_img, dft_coef, 1);
	dft(complex_img, dft_coef, 0);	// Opencv 제공 FFT 함수
	shuffling(dft_coef, dft_coef);	// 셔플링
	log_mag(dft_coef, dft_img);	// 주파수 스펙트럼 영상
}

Mat IFFT(Mat dft_coef, Size size)
{
	Mat idft_coef, idft_img[2];
	shuffling(dft_coef, dft_coef);	// 역 셔플링
									//FFT_2D(dft_coef, idft_coef, -1);
	dft(dft_coef, idft_coef, DFT_INVERSE + DFT_SCALE);
	split(idft_coef, idft_img);

	Rect img_rect(Point(0, 0), size);
	idft_img[0](img_rect).convertTo(idft_img[0], CV_8U);
	return idft_img[0];

}

void COpenCVDlg::OnBnClickedButton58()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 주파수 영역으로 변환하면 저주파/고주파 공간 영역을 쉽게 분리할 수 있다
	// 이렇게 분리된 주파수 영역을 강화하거나 약화 혹은 제거하는 등의 처리 가능

	// 주파수 역역에서 필터링 과정은 푸리에 변환 계수에 필터 행렬을 원소 간에 곱함
	// 푸리에 변환 계수는 복소수이기 때문에 필터의 곱세도 실수/허수부의 두 채널에 수행
	// 마지막으로 필터링된 푸리에 변환 계수를 푸리에 역변환하여 다시 공간영역 영상을 변환

	// 저주파 통과 필터링은 DFT 변환 연역에서 저주파 영역의 계수들은 통과시키고 그 이외의 영역은 차단
	// 따라서 저주파 통과 필터의 모양은 중간에서부터 지정된 반지름만큼 원형으로 1의 값을 갖게하고
	// 외각 부분을 0으로 지정하면 된다

	// 고주파 필터링은 그 반대로 수행
	Mat image = imread("TestDFT.jpg", 0);
	Rect img_rect(Point(0, 0), image.size());
	Mat dft_coef, dft_img, low_dft, high_dft, filtered_mat1, filtered_mat2;

	FFT(image, dft_coef, dft_img);
	Mat low_filter = get_lowpassFilter(dft_coef.size(), 50);
	Mat high_filter = get_highpassFilter(dft_coef.size(), 50);

	multiply(dft_coef, low_filter, filtered_mat1);	// 원소 간 곱셈
	multiply(dft_coef, high_filter, filtered_mat2);
	log_mag(filtered_mat1, low_dft);	// 주파수 스펙트럼 생성
	log_mag(filtered_mat2, high_dft);	// 주파수 스펙트럼 생성

	imshow("image", image);
	imshow("dft_img", dft_img);
	imshow("lowpassed_dft", low_dft);
	imshow("highpassed_dft", high_dft);
	imshow("lowpassed_img", IFFT(filtered_mat1, image.size()));
	imshow("highpassed_img", IFFT(filtered_mat2, image.size()));

	// 저주파만 통과되고 고주파 부분이 차단되어 경계부분이 둔화된 부드러운 영상이 됨
	// 반지름의 크기를 조절하여 주파수 조절
}

Mat getGausianFileter(Size size, int _sigma)
{
	Point center = size / 2;
	Mat filter(size, CV_32FC2, Vec2f(0, 0));
	double sigma = 2 * _sigma * _sigma;

	for (int i = 0; i < size.height; i++)
	{
		for (int j = 0; j < size.width; j++)
		{
			int x2 = (j - center.y)*(j - center.y);
			int y2 = (i - center.x) * (i - center.x);
			float w = exp(-(x2 + y2) / sigma);
			filter.at<Vec2f>(i, j) = Vec2f(w, w);
		}
	}
	return filter;
}

Mat getButterworthFilter(Size size, int D, int n)
{
	Point center = size / 2;
	Mat filter(size, CV_32FC2, Vec2f(0, 0));

	for (int i = 0; i < size.height; i++)
	{
		for (int j = 0; j < size.width; j++)
		{
			int x2 = (j - center.y) * (j - center.y);
			int y2 = (i - center.x) * (i - center.x);
			float distance = sqrt(x2 + y2);
			float w = 1 / (1 + pow(distance / D, 2 * n));
			filter.at<Vec2f>(i, j) = Vec2f(w, w);
		}
	}
	return filter;
}
void COpenCVDlg::OnBnClickedButton59()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 저주파 통과 필터링의 경우 영상에서 객체의 객체 경계부분이 완만해지기는 하지만
	// 경계부분 주위로 잔물결 같은 무늬가 나타나서 화질이 더욱 떨어진다

	// 이 문제를 해결하는 것은 필터 원소의 값을 차단 주파수에서 급격하게 0으로 만들지 않고
	// 완만한 경사를 이루도록 구성, 이러한 방식을 위해 대표적으로 버터워스/가우시안 필터 존재

	Mat image = imread("TestDFT.jpg", 0);

	Mat dft_coef, dft_img, filtered_mat1, filtered_mat2;
	Mat gauss_spect, butter_spect;

	FFT(image, dft_coef, dft_img);
	Mat gauss_filter = getGausianFileter(dft_coef.size(), 30);
	Mat butter_filter = getButterworthFilter(dft_coef.size(), 30, 4);

	multiply(dft_coef, gauss_filter, filtered_mat1);
	multiply(dft_coef, butter_filter, filtered_mat2);
	log_mag(filtered_mat1, gauss_spect);
	log_mag(filtered_mat2, butter_spect);

	imshow("image", image);
	imshow("dft_img", dft_img);
	imshow("gausus_lowpassed_spect", gauss_spect);
	imshow("butter_lowpassed_spect", butter_spect);
	imshow("gauss_lowpassed_img", IFFT(filtered_mat1, image.size()));
	imshow("butter_lowpassed_img", IFFT(filtered_mat2, image.size()));
}

Mat		_image, _dft_coef, _spectrum_img;
int		_radius, _thres = 30;

void remove_moire(int value, void* userdata)
{
	Mat remove_mask, remv_dft_coef, specturm_tmp;

	threshold(_spectrum_img, remove_mask, _thres, 255, THRESH_TOZERO_INV);
	circle(remove_mask, remove_mask.size() / 2, _radius, Scalar(255), -1);

	_dft_coef.copyTo(remv_dft_coef, remove_mask);
	log_mag(remv_dft_coef, specturm_tmp);

	Rect img_rect(Point(0, 0), image.size());
	imshow("모아레 제거", specturm_tmp);
	imshow("결과영상", IFFT(remv_dft_coef, image.size()));
}
void COpenCVDlg::OnBnClickedButton60()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 모아레란 두 개 이상의 주기적인 패턴이 겹쳐질 때 만들어지는 간섭 무늬를 지칭
	// 

	_image = imread("moi.jpg", 0);

	FFT(_image, _dft_coef, _spectrum_img);
	_radius = _dft_coef.rows / 4;

	Mat remove_mask, remv_dft_coef, specturm_tmp;

	threshold(_spectrum_img, remove_mask, _thres, 255, THRESH_TOZERO_INV);
	circle(remove_mask, remove_mask.size() / 2, _radius, Scalar(255), -1);

	_dft_coef.copyTo(remv_dft_coef, remove_mask);
	log_mag(remv_dft_coef, specturm_tmp);

	imshow("image", _image);
	imshow("모이레 제거", _spectrum_img);
	imshow("결과영상", IFFT(remv_dft_coef, _image.size()));

	//createTrackbar("반지름", "모아레 제거", &_radius, 255, remove_moire);
	//createTrackbar("임계값", "모아레 제거", &_radius, 255, remove_moire);
}

Mat DCT_block(Mat g)
{
	Mat dst(g.size(), g.type());
	int N = g.rows, M = g.cols;

	for (int k = 0; k < N; k++)
	{
		for (int l = 0; l < M; l++)			// 결과 행렬(dst) 화소 조회
		{
			float sum = 0;
			for (int n = 0; n < N; n++)		// 입력블록 크기로 코사인 함수값 생성
			{
				for (int m = 0; m < M; m++)
				{
					float theta1 = (float)(2 * n + 1)*k*CV_PI / (2 * N);
					float theta2 = (float)(2 * m + 1)*l*CV_PI / (2 * M);
					sum += g.at<float>(n, m) * cos(theta1) * cos(theta2); // 누적
				}
			}
			float ck = (k) ? sqrt(2.0f / N) : sqrt(1.0f / N);
			float cl = (l) ? sqrt(2.0f / M) : sqrt(1.0f / M);
			dst.at<float>(k, l) = ck* cl * sum;
		}
	}
	return dst;
}

Mat IDCT_block(Mat f)
{
	Mat dst(f.size(), f.type());
	int N = f.rows, M = f.cols;

	for (int n = 0; n < N; n++)
	{
		for (int m = 0; m < M; m++)
		{
			float sum = 0;
			for (int k = 0; k < N; k++)
			{
				for (int l = 0; l < M; l++)
				{
					float theta1 = (float)(2 * n + 1) * k * CV_PI / (2 * N);
					float theta2 = (float)(2 * m + 1) * l* CV_PI / (2 * M);

					float ck = (k) ? sqrt(2.0f / N) : sqrt(1.0f / N);
					float cl = (l) ? sqrt(2.0f / M) : sqrt(1.0f / M);
					sum += ck * cl * f.at<float>(k, l) * cos(theta1) * cos(theta2);
				}
			}
			dst.at<float>(n, m) = sum;
		}
	}
	return dst;
}

void DCT_2D(Mat img, Mat& dst, int N, int M, int dir)
{
	dst = Mat(img.size(), CV_32F);
	img.convertTo(img, CV_32F);
	for (int bi = 0; bi < img.rows; bi += N)
	{
		for (int bj = 0; bj < img.cols; bj += M)
		{
			Rect rect(Point(bj, bi), Size(M, N));
			Mat block = img(rect);
			Mat new_block = (dir == 0) ? DCT_block(block) : IDCT_block(block);
			new_block.copyTo(dst(rect));
		}
	}
}
void COpenCVDlg::OnBnClickedButton61()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 영상 신호의 에너지 집중 특성이 뛰어나서 영상 압축에 효과적인 주파수 변환 방법의 결과가 DCT
	// 이산 푸리에 변환은 실수부에 코사인 함수가 곱해지며 허수부에 사인 함수가 곱해져서 이뤄지는 반면
	// 이산 코사인 변환(DCT)는 DFT에서 실수부만 취하고 허수부분을 제외함으로써 코사인 함수만으로 구성된 직교 변환 방법

	// DCT는 일반적으로 전체 영상을 한 번에 변환시키는 것이 아니라 영상을 작은 블록으로 나누어서 블록단위로 수행
	// 블록의 크기를 키울수록 압축의 효율이 높아지지만 변환의 구현이 어려워지고 속도도 느려짐
	// 일반적으로 8x8크기가 성능과 구현 용이성 간에 상호보완되어 표준으로 사용

	Mat image = imread("Test.jpg", 0);

	Mat m_dct, m_idct;
	DCT_2D(image, m_dct, 8, 8, 0);
	DCT_2D(m_dct, m_idct, 8, 8, 1);

	Rect rect(0, 0, 8, 8);
	cout << "첫 8x8 블록 원영상 화소" << endl;
	cout << image(rect) << endl << endl;
	cout << "첫 8x8 블록 DCT 결과" << endl;
	cout << m_dct(rect) << endl;

	m_idct.convertTo(m_idct, CV_8U);
	imshow("image", image);
	imshow("idct", m_idct);

}

Mat getDCT_filter_dc(int N, int M)	// DC 통과 필터 (필터의 (0,0) 위치 값)
{
	Mat filter(N, M, CV_32F, Scalar(0));
	filter.at<float>(0, 0) = 1;

	return filter;
}

Mat getDCT_filter_hori(int N, int M)	// 수평 방향 통과 필터
{
	Mat filter(N, M, CV_32F, Scalar(0));
	for (int i = 0; i < N; i++)
		filter.at<float>(0, i) = 1;

	return filter;
}

Mat getDCT_filter_verti(int N, int M)	// 수직 방향 통과 필터
{
	Mat filter(N, M, CV_32F, Scalar(0));
	for (int i = 0; i < M; i++)
		filter.at<float>(i, 0) = 1;

	return filter;
}

Mat getDCT_filter_low(int N, int M) // 저주파 통과 필터 (DC 부근 값, 좌측 상단)
{
	Mat filter(N, M, CV_32F, Scalar(0));
	for (int i = 0; i < N / 2; i++)
		for (int j = 0; j < M / 2; j++)
			filter.at<float>(j, i) = 1;

	return filter;
}

Mat getDCT_filter_high(int N, int M)
{
	Mat filter(N, M, CV_32F, Scalar(1));
	filter.at<float>(0, 0) = 0; filter.at<float>(0, 1) = 0;
	filter.at<float>(0, 2) = 0; filter.at<float>(1, 0) = 0;
	filter.at<float>(1, 1) = 0; filter.at<float>(2, 1) = 0;

	return filter;
}

void DCT_filtering(Mat img, Mat filter, Mat& dst, int N, int M)
{
	dst = Mat(img.size(), CV_32F);
	img.convertTo(img, CV_32F);

	for (int bi = 0; bi < img.rows; bi += N)
	{
		for (int bj = 0; bj < img.cols; bj += M)
		{
			Rect rect(Point(bj, bi), Size(M, N));
			Mat new_block = DCT_block(img(rect));
			multiply(new_block, filter, new_block);

			IDCT_block(new_block).copyTo(dst(rect));
		}
	}
	dst.convertTo(dst, CV_8U);
}

void COpenCVDlg::OnBnClickedButton62()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image = imread("Test.jpg", 0);

	Mat dct_filter[5], dst[5];
	dct_filter[0] = getDCT_filter_dc(8, 8);
	dct_filter[1] = getDCT_filter_hori(8, 8);
	dct_filter[2] = getDCT_filter_verti(8, 8);
	dct_filter[3] = getDCT_filter_low(8, 8);
	dct_filter[4] = getDCT_filter_high(8, 8);

	for (int i = 0; i < 5; i++) {
		DCT_filtering(image, dct_filter[i], dst[i], 8, 8);
		if (i == 4) dst[i] *= 5;
		imshow("dst[" + to_string(i) + "]", dst[i]);
	}

	imshow("image", image);
}

Mat calc_cosine(int N, int M)
{
	Mat cos_mat(N*N, M*M, CV_32F);

	for (int k = 0; k < N; k++)
	{
		for (int l = 0; l < M; l++)
		{
			Point idx(l*M, k*N);
			for (int n = 0; n < N; n++)
			{
				for (int m = 0; m < M; m++)
				{
					float theta1 = (float)(2 * n + 1)*k*CV_PI / (2 * N);
					float theta2 = (float)(2 * m + 1)*l*CV_PI / (2 * M);
					cos_mat.at<float>(idx + Point(m, n)) = cos(theta1)*cos(theta2);
				}
			}
		}
	}
	return cos_mat;
}

Mat DCT_block(Mat g, Mat cos_mat, int dir)
{
	Mat dst(g.size(), g.type(), Scalar(0));
	int N = g.rows, M = g.cols;
	Vec2f CK(sqrt(1.0f / N), sqrt(2.0f / N));
	Vec2f CL(sqrt(1.0f / M), sqrt(2.0f / M));

	for (int k = 0; k < N; k++) {
		for (int l = 0; l < M; l++)
		{
			float ck = (k) ? CK[1] : CK[0];
			float cl = (l) ? CL[1] : CL[0];
			Point idx(l*M, k*N);
			for (int n = 0; n < N; n++)
			{
				for (int m = 0; m < M; m++)
				{
					float cos_value = cos_mat.at<float>(idx + Point(m, n));
					float coef = (dir == 0) ? g.at<float>(n, m) : g.at<float>(k, l);

					if (dir == 0) dst.at<float>(k, l) += ck*cl*coef*cos_value;
					else dst.at<float>(n, m) += ck*cl*coef*cos_value;
				}
			}
		}
	}
	return dst;

}

void DCT_2D_fast(Mat img, Mat& dst, int N, int M, int dir)
{
	dst = Mat(img.size(), CV_32F);
	img.convertTo(img, CV_32F);
	Mat cos_mat = calc_cosine(N, M);

	for (int bi = 0; bi < img.rows; bi += N) {
		for (int bj = 0; bj < img.cols; bj += M) {
			Rect rect(Point(bj, bi), Size(M, N));
			Mat block = img(rect);
			Mat new_block = DCT_block(block, cos_mat, dir);
			new_block.copyTo(dst(rect));
		}
	}
}

void COpenCVDlg::OnBnClickedButton63()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	Mat image = imread("Test.jpg", 0);
	Mat m_dct, m_idct;

	clock_t start = clock();
	DCT_2D(image, m_dct, 8, 8, 0);
	DCT_2D(m_dct, m_idct, 8, 8, 1);
	printf("normal DFT + IDFT 시간 %5.1f ms\n", (double)(clock() - start));

	m_idct.convertTo(m_idct, CV_8U);
	imshow("m_idct1", m_idct);

	start = clock();
	DCT_2D_fast(image, m_dct, 8, 8, 0);
	DCT_2D_fast(m_dct, m_idct, 8, 8, 1);
	printf(" fast DFT + IDFT 시간 %5.1 ms\n", (double)(clock() - start));

	m_idct.convertTo(m_idct, CV_8U);
	imshow("m_idct2", m_idct);
}


void draw_houghLines(Mat src, Mat& dst, vector<Vec2f> lines, int nline)
{
	cvtColor(src, dst, CV_GRAY2BGR);
	for (size_t i = 0; i < min((int)lines.size(), nline); i++)
	{
		float rho = lines[i][0], theta = lines[i][1];
		double a = cos(theta), b = sin(theta);
		Point2d pt(a*rho, b*rho);
		Point2d delta(1000 * -b, 1000 * a);
		line(dst, pt + delta, pt - delta, Scalar(0, 255, 0), 1, LINE_AA);
	}
}

void COpenCVDlg::OnBnClickedButton64()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 직선 검출 방법 중 가장 널리 사용, 영상 내의 선, 원뿐만 아니라
	// 임의의  형태를 지닌 물체를 감지해 내는 대표적인 기술
	// 데이터 손실 및 왜곡이포함된 영상에서도 직선을 잘 추출

	// 영상의 에지 점들을 극 좌표계로 옮겨 물체의 파라미터를 추출하는 방법
	// 직교 좌표계의 경우 기울기가 무한대, 직선 간격이 동일하지 않을 때
	// 정밀도와 속도에서 문제가 생기는 반면, 극 좌표계로 옮기면 직선 표현 가능 뿐만 아니라
	// 수직거리와 각도를 일정한 간격으로 검출함으로서 정밀한 직선 검출 가능

	// 간단히 말해, 
	// 이진 영상에서 나온 점들을 허프 스페이스로 변환, 각 점들이 허프 스페이스에서는
	// 곡선으로 이뤄져 있는데 이 곡선들의 교차점이 직선이 되는것
	// 이 교차점들 중 가장 많이 교차되는 지점이 가장 직선에 근사한 값들이 되는 것

	Mat img = imread("Test.jpg", 0);
	Mat dst;
	GaussianBlur(img, img, Size(5, 5), 2, 2);
	Canny(img, img, 100, 150, 3);

	double rho = 1, theta = CV_PI / 180;
	vector<Vec2f> line;
	HoughLines(img, line, rho, theta, 50);
	draw_houghLines(img, dst, line, 1);

	namedWindow("img", WINDOW_AUTOSIZE);
	namedWindow("dst", WINDOW_AUTOSIZE);
	imshow("img", img);
	imshow("dst", dst);
}

Mat draw_coner(Mat corner, Mat image, int thresh)
{
	int cnt = 0;
	normalize(corner, corner, 0, 100, NORM_MINMAX, CV_32FC1, Mat());
	for (int i = 1; i < corner.rows-1; i++)
	{
		for (int j = 1; j < corner.cols-1; j++)
		{
			float cur = (int)corner.at<float>(i, j);
			if (cur > thresh)
			{
				if (cur > corner.at<float>(i - 1, j) &&
					cur > corner.at<float>(i + 1, j) &&
					cur > corner.at<float>(i, j - 1) &&
					cur > corner.at<float>(i, j + 1))
				{
					circle(image, Point(j, i), 2, Scalar(255, 0, 0), - 1);
					cnt++;
				}
			}
		}
	}

	return image;
}

Mat imgcorner;
Mat corner;

void cornerHarris_demo(int thresh, void*)
{
	Mat img1 = draw_coner(corner, imgcorner.clone(), thresh);
	imshow("harris", img1);
}

void COpenCVDlg::OnBnClickedButton65()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 에지나 직선처럼 영상 처리에서 중요한 특징 정보로 사용되는
	// 꼭지점 혹은 코너라 부르는 특징점이 있다.
	
	// 윈도우를 모든 방향으로 이동시키며 픽셀의 강도 변화를 측정함으로써
	// 윈도우 내의 특징을 파악하여 코너 검출

	imgcorner = imread("Test.jpg", 1);
	Mat gray;
	
	cvtColor(imgcorner, gray, CV_BGR2GRAY);
	
	int blockSize = 4; // 이웃 화소 범위
	int apertureSize = 3; // 소벨 마스크 크기
	double k = 0.04;
	int thresh = 20; // 코너 응답 임계값

	cornerHarris(gray, corner, blockSize, apertureSize, k);
	cornerHarris_demo(thresh, 0);

//	createTrackbar("Threshold: ", "harris", &thresh, 100, cornerHarris_demo);

	
}

void make_trainData(Mat trainData, Mat group[2], Mat& classLable)
{
	int half = trainData.rows / 2;
	Range r1(0, half);
	Range r2(half, trainData.rows);
	group[0] = trainData.rowRange(r1);
	group[1] = trainData.rowRange(r2);

	randn(group[0], 150, 50);
	randn(group[1], 250, 50);

	classLable.rowRange(r1).setTo(0);
	classLable.rowRange(r2).setTo(1);
}

void draw_points(Mat& image, Mat group[2])
{
	for (int i = 0; i < group[0].rows; i++)
	{
		Point2f pt1(group[0].at<float>(i, 0), group[0].at<float>(i, 1));
		Point2f pt2(group[1].at<float>(i, 0), group[1].at<float>(i, 1));

		circle(image, pt1, 3, Scalar(0, 0, 255), FILLED);
		circle(image, pt2, 3, Scalar(0, 255, 0), FILLED);
	}
}

void CAboutDlg::OnBnClickedButton66()
{
	
}


void kNN_test(Ptr<ml::KNearest> knn, int K, Mat& image)
{
	for (int y = 0; y < image.rows; y++)
	{
		for (int x = 0; x < image.cols; x++)
		{
			Matx12f sample((float)x, (float)y);
			Mat response;
			knn->findNearest(sample, K, response);

			int resp = (int)response.at<float>(0);
			if (resp == 1) image.at<Vec3b>(y, x) = Vec3b(0, 180, 0);
			else image.at<Vec3b>(y, x) = Vec3b(0, 0, 180);
		}
	}
}

void COpenCVDlg::OnBnClickedButton66()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	/*
	최근접 이웃 알고리즘은 기존에 가지고 있는 데이터들을 일정한 규칙에 의해 분류된
	상태에서 새로운 입력데이터의 종류를 예측하는 분류 알고리즘

	학습된 클래스들에서 여러 개(k개)의 가까운 이웃을 선출하고 이를 이용하여 미지의
	샘플들을 분류하는 방법이다.
	즉, 샘플과 가장 가까운 이웃으로 선출된 여러 개의 클래스 샘플들 중에서
	가장 많은 수를 가진 클래스로 미지의 샘플을 분류 (KNN)

	간단히 말해 K는 미지의 샘플 기준으로 가장 가까운 K개의 클래스 샘플을 찾아
	K개중 가장 많은 수를 차지하는 클래스가 곧 미지의 샘플 클래스로 보는 것
	*/

	// 100개의 좌표를 두 개의 그룹으로 나누어 랜덤하게 생성하는 예제 샘플코드

	int Nsample = 100;
	Mat trainData(Nsample, 2, CV_32FC1, Scalar(0));
	Mat classLable(Nsample, 1, CV_32FC1, Scalar(0));
	Mat image(400, 400, CV_8UC3, Scalar(255, 255, 255));
	Mat image2(400, 400, CV_8UC3, Scalar(255, 255, 255));
	Mat image3(400, 400, CV_8UC3, Scalar(255, 255, 255));
	Mat group[2];
	make_trainData(trainData, group, classLable);

	int K = 7, K2 = 50, K3 = 20;
	Ptr<ml::KNearest> knn = ml::KNearest::create();
	knn->train(trainData, ml::ROW_SAMPLE, classLable);
	kNN_test(knn, K, image);
	kNN_test(knn, K2, image2);
	kNN_test(knn, K3, image3);

	draw_points(image, group);
	draw_points(image2, group);
	draw_points(image3, group);
	imshow("sample K=" + to_string(K), image);
	imshow("sample K2=" + to_string(K2), image2);
	imshow("sample K3=" + to_string(K3), image3);
}


void find_histoPos(Mat img, int& start, int& end, int direct)
{
	// 행렬 원소를 가로방향 혹은 세로 방향을 감축 = 한 방향 기준으로 투영한 것과 같은 의미
	reduce(img, img, direct, REDUCE_AVG);	
	int minFound = 0;
	for (int i = 0; i < (int)img.total(); i++)
	{
		if(img.at<uchar>(i) < 250)
		{
			end = i;
			if (!minFound)
			{
				start = i;
				minFound = 1;
			}
		}
	}
}

Mat find_number(Mat part)
{
	Point start, end;
	find_histoPos(part, start.x, end.x, 0);
	find_histoPos(part, start.y, end.y, 1);

	return part(Rect(start, end));
}

Mat place_middle(Mat number, Size new_size) 
{
	// 각셀의 숫자 위치가 동일해야 학습 효과가 올라간다
	int big = max(number.cols, number.rows);
	Mat square(big, big, number.type(), Scalar(255));

	Point start = (square.size() - number.size()) / 2;
	Rect middle(start, number.size());
	number.copyTo(square(middle));

	resize(square, square, new_size);
	square.convertTo(square, CV_32F);
	return square.reshape(0, 1);
}

void COpenCVDlg::OnBnClickedButton67()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	Size  size(40, 40);
	int K = 15;
	int Nclass = 10;
	int Nsample = 20;
	Mat train_image = imread("train_numbers.png", 0);

	threshold(train_image, train_image, 32, 2255, THRESH_BINARY);

	Mat trainData, classLable;

	for (int i = 0, k = 0; i < Nclass; i++)
	{
		for (int j = 0; j < Nsample; j++, k++)
		{
			Point start(j*size.width, i*size.height);
			Rect roi(start, size);
			Mat part = train_image(roi);

			Mat num = find_number(part);
			Mat data = place_middle(num, size);
			trainData.push_back(data);
			classLable.push_back(i);
		}
	}

	Ptr<ml::KNearest> knn = ml::KNearest::create();
	knn->train(trainData, ml::ROW_SAMPLE, classLable);

	int no;
	cout << "영상번호를 입력하세요: ";
	cin >> no;

	string demo_file = format("image\\num\\%02d.png", no);
	Mat test_img = imread(demo_file, 0);

	threshold(test_img, test_img, 128, 255, THRESH_BINARY);
	Mat num = find_number(test_img);
	Mat data = place_middle(num, size);

	Mat result;
	knn->findNearest(data, K, result);

	cout << "분류결과 : " << result.at<float>(0) << endl;
	imshow("test_img", test_img);
} 

Point2f pt1, pt2;
Mat morpImg;

void morphing()
{
	Mat dst(morpImg.size(), morpImg.type(), Scalar(0));
	int width = morpImg.cols;

	for (float y = 0; y < morpImg.rows; y++)
	{
		for (float x = 0; x < morpImg.cols; x += 0.1f)
		{
			float ratio;
			if (x < pt1.x) ratio = x / pt1.x;
			else
			{
				ratio = (width - x) / (width - pt1.x);
			}

			float dx = ratio*(pt2.x - pt1.x);
			dst.at<uchar>(y, x + dx) = morpImg.at<uchar>(y, x);
		}
	}
	dst.copyTo(morpImg);
	imshow("image", morpImg);
}

void onMMMouse(int event, int x, int y, int flags, void* param)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		pt1 = Point2f(x, y);
	}

	else if (event == EVENT_LBUTTONUP)
	{
		pt2 = Point2f(x, y);
		morphing();
	}
}

void COpenCVDlg::OnBnClickedButton68()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// 영상을 여러 다른 방향으로 늘이거나 크기를 조절하는 기법으로
	// 수순한 스케일링과는 달리 크기 변화의 정도가 영상 전체에 대해 균일하지 않음 (비선형적)
	// 랜즈 왜곡 보정, 스테레오 영상 정합, 파노라마 영상 합성 등에서 사용 가능

	morpImg = imread("Test.jpg", 0);

	imshow("image", morpImg);
	setMouseCallback("image", onMMMouse);
}


void COpenCVDlg::OnBnClickedButton69()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
