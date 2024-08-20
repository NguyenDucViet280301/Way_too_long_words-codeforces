Đôi khi một số từ như " localization " hoặc " internationalization " quá dài đến nỗi việc viết chúng nhiều lần trong một văn bản khá là mệt mỏi.

Hãy xem xét một từ quá dài , nếu độ dài của nó lớn hơn 10 ký tự. Tất cả các từ quá dài nên được thay thế bằng một từ viết tắt đặc biệt.

Viết tắt này được thực hiện như sau: chúng ta viết chữ cái đầu tiên và chữ cái cuối cùng của một từ và giữa chúng, chúng ta viết số chữ cái giữa chữ cái đầu tiên và chữ cái cuối cùng. Số đó ở hệ thập phân và không chứa bất kỳ số 0 nào ở đầu.

Vì vậy, " localization " sẽ được viết là " l10n ", và " internationalization " sẽ được viết là " i18n ".

Bạn được đề xuất tự động hóa quá trình thay đổi các từ bằng chữ viết tắt. Khi đó, tất cả các từ quá dài sẽ được thay thế bằng chữ viết tắt và các từ không quá dài sẽ không bị thay đổi.

Đầu vào:

Dòng đầu tiên chứa một số nguyên n ( 1 ≤  n  ≤ 100 ). Mỗi dòng trong n dòng sau chứa một từ. Tất cả các từ đều bao gồm các chữ cái Latin thường và có độ dài từ 1 đến 100 ký tự.

Đầu ra:

In ra n dòng. Dòng thứ i phải chứa kết quả thay thế từ thứ i trong dữ liệu đầu vào.

Giải quyết:

Nhập dữ liệu:

  Nhập số lượng từ cần xử lý.
  
  Nhập từng từ vào một mảng các chuỗi.
  
Xử lý từng từ:

  Kiểm tra độ dài: Nếu độ dài từ lớn hơn 10, thực hiện viết tắt.
  
Viết tắt:

  Lấy chữ cái đầu tiên và cuối cùng.

  Tính số lượng chữ cái giữa bằng cách lấy độ dài chuỗi trừ đi 2.
  
  Nối các phần lại thành một chuỗi mới.
  
In kết quả:
  
  In ra danh sách các từ sau khi đã viết tắt.
