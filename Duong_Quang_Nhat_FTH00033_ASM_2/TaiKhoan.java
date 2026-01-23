package main.session5;

public class TaiKhoan {
    private String soTaiKhoan;
    private String tenChuTK;
    private Double soDu;

    public TaiKhoan(String soTaiKhoan, String tenChuTK, Double soDu) {
        this.soTaiKhoan = soTaiKhoan;
        this.tenChuTK = tenChuTK;
        this.soDu = soDu;
    }

    public String getSoTaiKhoan() {
        return soTaiKhoan;
    }

    public void setSoTaiKhoan(String soTaiKhoan) {
        this.soTaiKhoan = soTaiKhoan;
    }

    public String getTenChuTK() {
        return tenChuTK;
    }

    public void setTenChuTK(String tenChuTK) {
        this.tenChuTK = tenChuTK;
    }

    public void setSoDu(Double soDu) {
        this.soDu = soDu;
    }

    public Double getSoDu() {
        return soDu;
    }

    public void napTien(Double soTien) {
        if (soTien <= 0) {
            System.out.println("Khong cho nap so tien am hoac bang 0!");
            return;
        }
        soDu += soTien;
        System.out.printf("Nap tien thanh cong. So du hien tai: %.0f\n", soDu);
    }

    public void rutTien(Double soTien) {
        if (soTien <= 0) {
            System.out.println("Khong cho rut so tien am hoac bang 0!");
            return;
        }

        if (soTien > soDu) {
            System.out.println("So du khong du de rut tien!");
            return;
        }

        soDu -= soTien;
        System.out.printf("Rut tien thanh cong. So du hien tai: %.0f\n", soDu);
    }

    public void hienThiSoDu() {
        System.out.println("So tai khoan: " + soTaiKhoan);
        System.out.println("Chu tai khoan: " + tenChuTK);
        System.out.printf("So du hien tai: %.0f\n", soDu);
    }
}
