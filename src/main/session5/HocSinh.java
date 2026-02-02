package main.session5;

public class HocSinh {
    private String hoTen;
    private Double diemToan;
    private Double diemVan;
    private Double diemAnh;

    public HocSinh(String hoTen, Double diemToan, Double diemVan, Double diemAnh){
        this.hoTen = hoTen;
        setDiemToan(diemToan);
        setDiemVan(diemVan);
        setDiemAnh(diemAnh);
    }

    public String getHoTen(){
        return hoTen;
    }

    public void setHoTen(String hoTen){
        this.hoTen = hoTen;
    }

    private boolean diemHopLe(Double diem){
        return diem != null && diem >= 0 && diem <= 10;
    }

    public Double getDiemToan(){
        return diemToan;
    }

    public void setDiemToan(Double diemToan){
        if(!diemHopLe(diemToan)){
            System.out.println("Diem Toan khong hop le (0-10). Dat ve 0.");
            this.diemToan = 0.0;
            return;
        }
        this.diemToan = diemToan;
    }

    public Double getDiemVan(){
        return diemVan;
    }

    public void setDiemVan(Double diemVan){
        if(!diemHopLe(diemVan)){
            System.out.println("Diem Van khong hop le (0-10). Dat ve 0.");
            this.diemVan = 0.0;
            return;
        }
        this.diemVan = diemVan;
    }

    public Double getDiemAnh(){
        return diemAnh;
    }

    public void setDiemAnh(Double diemAnh){
        if(!diemHopLe(diemAnh)){
            System.out.println("Diem Anh khong hop le (0-10). Dat ve 0.");
            this.diemAnh = 0.0;
            return;
        }
        this.diemAnh = diemAnh;
    }

    public double tinhDiemTB(){
        return (diemToan + diemVan + diemAnh) / 3.0;
    }

    public String xepLoai(){
        double dtb = tinhDiemTB();
        if (dtb >= 8) return "Gioi";
        if (dtb >= 6.5) return "Kha";
        if (dtb >= 5) return "Trung binh";
        return "Yeu";
    }

    public void inThongTin() {
        System.out.println("Ho ten: " + hoTen);
        System.out.println("Toan: " + diemToan);
        System.out.println("Van: " + diemVan);
        System.out.println("Anh: " + diemAnh);
        System.out.println("Diem TB: " + tinhDiemTB());
        System.out.println("Xep loai: " + xepLoai());
    }
}
