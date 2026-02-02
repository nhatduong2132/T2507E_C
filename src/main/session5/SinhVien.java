package main.session5;

public class SinhVien {
    private String maSv;
    private String hoTen;
    private Integer tuoi;
    private Double diemtb;

    public SinhVien(String maSv, String hoTen, Integer tuoi, Double diemtb){
        this.maSv = maSv;
        this.hoTen = hoTen;
        this.tuoi = tuoi;
        this.diemtb = diemtb;
    }

    public String getMaSV(){
        return maSv;
    }

    public void setMaSV(String maSV){
        this.maSv = maSV;
    }

    public String getHoTen(){
        return hoTen;
    }

    public void setHoTen(String hoTen){
        this.hoTen = hoTen;
    }

    public Integer getTuoi(){
        return tuoi;
    }

    public void setTuoi(Integer tuoi){
        this.tuoi = tuoi;
    }

    public Double getDiemTB(){
        return diemtb;
    }

    public void setDiemTB(Double diemtb){
        this.diemtb = diemtb;
    }

    public void inThongTin(){
        System.out.println("Ma Sinh Vien: " + maSv);
        System.out.println("Ho Ten Sinh Vien: " + hoTen);
        System.out.println("Tuoi Sinh Vien: " + tuoi);
        System.out.println("Diem Trung Binh Sinh Vien: " + diemtb);
    }
}
